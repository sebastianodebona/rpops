// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/PoPS.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// pops_model
List pops_model(int random_seed, double lethal_temperature, bool use_lethal_temperature, int lethal_temperature_month, double reproductive_rate, bool weather, double short_distance_scale, IntegerMatrix infected, IntegerMatrix susceptible, IntegerMatrix mortality_tracker, IntegerMatrix total_plants, std::vector<NumericMatrix> temperature, std::vector<NumericMatrix> weather_coefficient, int ew_res, int ns_res, std::string time_step, int season_month_start, int season_month_end, double start_time, double end_time, std::string dispersal_kern, double percent_short_distance_dispersal, double long_distance_scale, std::string wind_dir, double kappa);
static SEXP _PoPS_pops_model_try(SEXP random_seedSEXP, SEXP lethal_temperatureSEXP, SEXP use_lethal_temperatureSEXP, SEXP lethal_temperature_monthSEXP, SEXP reproductive_rateSEXP, SEXP weatherSEXP, SEXP short_distance_scaleSEXP, SEXP infectedSEXP, SEXP susceptibleSEXP, SEXP mortality_trackerSEXP, SEXP total_plantsSEXP, SEXP temperatureSEXP, SEXP weather_coefficientSEXP, SEXP ew_resSEXP, SEXP ns_resSEXP, SEXP time_stepSEXP, SEXP season_month_startSEXP, SEXP season_month_endSEXP, SEXP start_timeSEXP, SEXP end_timeSEXP, SEXP dispersal_kernSEXP, SEXP percent_short_distance_dispersalSEXP, SEXP long_distance_scaleSEXP, SEXP wind_dirSEXP, SEXP kappaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type random_seed(random_seedSEXP);
    Rcpp::traits::input_parameter< double >::type lethal_temperature(lethal_temperatureSEXP);
    Rcpp::traits::input_parameter< bool >::type use_lethal_temperature(use_lethal_temperatureSEXP);
    Rcpp::traits::input_parameter< int >::type lethal_temperature_month(lethal_temperature_monthSEXP);
    Rcpp::traits::input_parameter< double >::type reproductive_rate(reproductive_rateSEXP);
    Rcpp::traits::input_parameter< bool >::type weather(weatherSEXP);
    Rcpp::traits::input_parameter< double >::type short_distance_scale(short_distance_scaleSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type infected(infectedSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type susceptible(susceptibleSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type mortality_tracker(mortality_trackerSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type total_plants(total_plantsSEXP);
    Rcpp::traits::input_parameter< std::vector<NumericMatrix> >::type temperature(temperatureSEXP);
    Rcpp::traits::input_parameter< std::vector<NumericMatrix> >::type weather_coefficient(weather_coefficientSEXP);
    Rcpp::traits::input_parameter< int >::type ew_res(ew_resSEXP);
    Rcpp::traits::input_parameter< int >::type ns_res(ns_resSEXP);
    Rcpp::traits::input_parameter< std::string >::type time_step(time_stepSEXP);
    Rcpp::traits::input_parameter< int >::type season_month_start(season_month_startSEXP);
    Rcpp::traits::input_parameter< int >::type season_month_end(season_month_endSEXP);
    Rcpp::traits::input_parameter< double >::type start_time(start_timeSEXP);
    Rcpp::traits::input_parameter< double >::type end_time(end_timeSEXP);
    Rcpp::traits::input_parameter< std::string >::type dispersal_kern(dispersal_kernSEXP);
    Rcpp::traits::input_parameter< double >::type percent_short_distance_dispersal(percent_short_distance_dispersalSEXP);
    Rcpp::traits::input_parameter< double >::type long_distance_scale(long_distance_scaleSEXP);
    Rcpp::traits::input_parameter< std::string >::type wind_dir(wind_dirSEXP);
    Rcpp::traits::input_parameter< double >::type kappa(kappaSEXP);
    rcpp_result_gen = Rcpp::wrap(pops_model(random_seed, lethal_temperature, use_lethal_temperature, lethal_temperature_month, reproductive_rate, weather, short_distance_scale, infected, susceptible, mortality_tracker, total_plants, temperature, weather_coefficient, ew_res, ns_res, time_step, season_month_start, season_month_end, start_time, end_time, dispersal_kern, percent_short_distance_dispersal, long_distance_scale, wind_dir, kappa));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _PoPS_pops_model(SEXP random_seedSEXP, SEXP lethal_temperatureSEXP, SEXP use_lethal_temperatureSEXP, SEXP lethal_temperature_monthSEXP, SEXP reproductive_rateSEXP, SEXP weatherSEXP, SEXP short_distance_scaleSEXP, SEXP infectedSEXP, SEXP susceptibleSEXP, SEXP mortality_trackerSEXP, SEXP total_plantsSEXP, SEXP temperatureSEXP, SEXP weather_coefficientSEXP, SEXP ew_resSEXP, SEXP ns_resSEXP, SEXP time_stepSEXP, SEXP season_month_startSEXP, SEXP season_month_endSEXP, SEXP start_timeSEXP, SEXP end_timeSEXP, SEXP dispersal_kernSEXP, SEXP percent_short_distance_dispersalSEXP, SEXP long_distance_scaleSEXP, SEXP wind_dirSEXP, SEXP kappaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_PoPS_pops_model_try(random_seedSEXP, lethal_temperatureSEXP, use_lethal_temperatureSEXP, lethal_temperature_monthSEXP, reproductive_rateSEXP, weatherSEXP, short_distance_scaleSEXP, infectedSEXP, susceptibleSEXP, mortality_trackerSEXP, total_plantsSEXP, temperatureSEXP, weather_coefficientSEXP, ew_resSEXP, ns_resSEXP, time_stepSEXP, season_month_startSEXP, season_month_endSEXP, start_timeSEXP, end_timeSEXP, dispersal_kernSEXP, percent_short_distance_dispersalSEXP, long_distance_scaleSEXP, wind_dirSEXP, kappaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _PoPS_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("List(*pops_model)(int,double,bool,int,double,bool,double,IntegerMatrix,IntegerMatrix,IntegerMatrix,IntegerMatrix,std::vector<NumericMatrix>,std::vector<NumericMatrix>,int,int,std::string,int,int,double,double,std::string,double,double,std::string,double)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _PoPS_RcppExport_registerCCallable() { 
    R_RegisterCCallable("PoPS", "_PoPS_pops_model", (DL_FUNC)_PoPS_pops_model_try);
    R_RegisterCCallable("PoPS", "_PoPS_RcppExport_validate", (DL_FUNC)_PoPS_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_PoPS_pops_model", (DL_FUNC) &_PoPS_pops_model, 25},
    {"_PoPS_RcppExport_registerCCallable", (DL_FUNC) &_PoPS_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_PoPS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
