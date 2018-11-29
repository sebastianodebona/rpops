#' PoPS (Pest or Pathogen Spread) model
#'
#' @param infected_file path to raster file with initial infections
#' @param host_file path to raster file with number of hosts
#' @param total_plants_file path to raster file with number of total plants
#' @param reproductive_rate 
#' @param use_lethal_temperature 
#' @param temp 
#' @param precip 
#' @param temperature_file path to raster file with temperature data for minimum temperature
#' @param temperature_coefficient_file path to raster file with 
#' @param precipitation_coefficient_file path to raster file with 
#' @param season_month_start 
#' @param season_month_end 
#' @param time_step 
#' @param start_time 
#' @param end_time 
#' @param dispersal_kern 
#' @param percent_short_distance_dispersal 
#' @param short_distance_scale 
#' @param long_distance_scale 
#' @param lethal_temperature 
#' @param lethal_temperature_month 
#' @param wind_dir sets the wind direction 
#' @param kappa sets the strength of the wind direction in the von-mises distribution
#' @param random_seed sets the random seed for the simulation used for reproducibility
#'
#' @return
#' @export
#'
#' @examples
#' 
pops <- function(infected_file, host_file, total_plants_file, reproductive_rate = 3.0,
                 use_lethal_temperature = FALSE, temp = FALSE, precip = FALSE,
                 temperature_file = "", temperature_coefficient_file = "", precipitation_coefficient_file ="",
                 season_month_start = 1, season_month_end = 12, time_step = "month",
                 start_time = 2018, end_time = 2022,
                 dispersal_kern = "cauchy", percent_short_distance_dispersal = 1.0,
                 short_distance_scale = 59, long_distance_scale = 0.0,
                 lethal_temperature = -12.87, lethal_temperature_month = 1,
                 wind_dir = "NONE", kappa = 0, random_seed = 42){ 
  
  Sys.setenv("PKF_CXXFLAGS"="-std=c++11")
  Rcpp::sourceCpp("src/pops.cpp")
  random_seed <- random_seed
  
  if (time_step == "week") {
    number_of_time_steps <- (end_time-start_time+1)*52 +1
  } else if (time_step == "month") {
    number_of_time_steps <- (end_time-start_time+1)*12
  } else if (time_step == "day") {
    number_of_time_steps <- (end_time-start_time+1)*365
  }
  
  number_of_years <- end_time-start_time+1
  
  infected <- raster::raster(infected_file)
  infected[is.na(infected)] <- 0
  host <- raster::raster(host_file)
  host[is.na(host)] <- 0
  susceptible <- host - infected
  susceptible[is.na(susceptible)] <- 0
  total_plants <- raster::raster(total_plants_file)
  total_plants[is.na(total_plants)] <- 0
  
  if (use_lethal_temperature == TRUE) {
    temperature_stack <- raster::stack(temperature_file)
    temperature_stack[is.na(temperature_stack)] <- 0
    temperature <- list(as.matrix(temperature_stack[[1]]))
    for(i in 2:number_of_years) {
      temperature[[i]] <- as.matrix(temperature_stack[[i]])
    }
  }
  
  weather <- FALSE
  if (temp == TRUE) {
    temperature_coefficient <- raster::stack(temperature_coefficient_file)
    weather <- TRUE
    weather_coefficient_stack <- temperature_coefficient
    if (precip ==TRUE){
      precipitation_coefficient <- raster::stack(precipitation_coefficient_file)
      weather_coefficient_stack <- weather_coefficient_stack * precipitation_coefficient
    }
  } else if(precip == TRUE){
    precipitation_coefficient <- raster::stack(precipitation_coefficient_file)
    weather <- TRUE
    weather_coefficient_stack <- precipitation_coefficient
  }
  
  if (weather == TRUE){
    weather_coefficient_stack[is.na(weather_coefficient_stack)] <- 0
    weather_coefficient <- list(as.matrix(weather_coefficient_stack[[1]]))
    for(i in 2:number_of_time_steps) {
      weather_coefficient[[i]] <- as.matrix(weather_coefficient_stack[[i]])
    }
  }
  
  ew_res <- raster::xres(susceptible)
  ns_res <- raster::yres(susceptible)
  
  mortality_tracker <- infected
  raster::values(mortality_tracker) <- 0
  
  infected <- as.matrix(infected)
  susceptible <- as.matrix(susceptible)
  total_plants <- as.matrix(total_plants)
  mortality_tracker <- as.matrix(mortality_tracker)
  
  data <- pops_model(random_seed, 
           lethal_temperature = lethal_temperature, use_lethal_temperature = use_lethal_temperature, lethal_temperature_month = lethal_temperature_month,
           reproductive_rate = reproductive_rate, 
           weather = weather, short_distance_scale = short_distance_scale, infected = infected,
           susceptible = susceptible, mortality_tracker = mortality_tracker,
           total_plants = total_plants, temperature = temperature,
           weather_coefficient = weather_coefficient, 
           ew_res = ew_res, ns_res = ns_res,
           time_step = time_step,
           season_month_start = season_month_start, season_month_end = season_month_end,
           start_time = start_time, end_time = end_time,
           dispersal_kern = dispersal_kern, percent_short_distance_dispersal = percent_short_distance_dispersal,
           long_distance_scale = long_distance_scale,
           wind_dir = wind_dir, kappa = kappa)
}

