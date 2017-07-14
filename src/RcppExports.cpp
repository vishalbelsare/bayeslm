// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/bayeslm.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// sharkfin
List sharkfin(arma::mat Y, arma::mat X, arma::vec prob_vec, arma::uvec penalize, arma::vec block_vec, int prior_type, double sigma, double s2, double kap2, int nsamps, int burn, int skip, double vglobal, bool verb, bool icept, bool standardize, bool singular);
RcppExport SEXP bayeslm_sharkfin(SEXP YSEXP, SEXP XSEXP, SEXP prob_vecSEXP, SEXP penalizeSEXP, SEXP block_vecSEXP, SEXP prior_typeSEXP, SEXP sigmaSEXP, SEXP s2SEXP, SEXP kap2SEXP, SEXP nsampsSEXP, SEXP burnSEXP, SEXP skipSEXP, SEXP vglobalSEXP, SEXP verbSEXP, SEXP iceptSEXP, SEXP standardizeSEXP, SEXP singularSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type prob_vec(prob_vecSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type penalize(penalizeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type block_vec(block_vecSEXP);
    Rcpp::traits::input_parameter< int >::type prior_type(prior_typeSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< double >::type kap2(kap2SEXP);
    Rcpp::traits::input_parameter< int >::type nsamps(nsampsSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< double >::type vglobal(vglobalSEXP);
    Rcpp::traits::input_parameter< bool >::type verb(verbSEXP);
    Rcpp::traits::input_parameter< bool >::type icept(iceptSEXP);
    Rcpp::traits::input_parameter< bool >::type standardize(standardizeSEXP);
    Rcpp::traits::input_parameter< bool >::type singular(singularSEXP);
    rcpp_result_gen = Rcpp::wrap(sharkfin(Y, X, prob_vec, penalize, block_vec, prior_type, sigma, s2, kap2, nsamps, burn, skip, vglobal, verb, icept, standardize, singular));
    return rcpp_result_gen;
END_RCPP
}
// bayeslm
List bayeslm(arma::mat Y, arma::mat X, arma::vec beta_hat, arma::vec beta, arma::uvec penalize, arma::vec block_vec, arma::vec rank_vec, int prior_type, Rcpp::Nullable<Rcpp::Function> user_prior_function, double sigma, double s2, double kap2, int nsamps, int burn, int skip, double vglobal, bool verb, bool icept, bool standardize, bool singular);
RcppExport SEXP bayeslm_bayeslm(SEXP YSEXP, SEXP XSEXP, SEXP beta_hatSEXP, SEXP betaSEXP, SEXP penalizeSEXP, SEXP block_vecSEXP, SEXP rank_vecSEXP, SEXP prior_typeSEXP, SEXP user_prior_functionSEXP, SEXP sigmaSEXP, SEXP s2SEXP, SEXP kap2SEXP, SEXP nsampsSEXP, SEXP burnSEXP, SEXP skipSEXP, SEXP vglobalSEXP, SEXP verbSEXP, SEXP iceptSEXP, SEXP standardizeSEXP, SEXP singularSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta_hat(beta_hatSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type penalize(penalizeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type block_vec(block_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type rank_vec(rank_vecSEXP);
    Rcpp::traits::input_parameter< int >::type prior_type(prior_typeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::Function> >::type user_prior_function(user_prior_functionSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< double >::type kap2(kap2SEXP);
    Rcpp::traits::input_parameter< int >::type nsamps(nsampsSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< double >::type vglobal(vglobalSEXP);
    Rcpp::traits::input_parameter< bool >::type verb(verbSEXP);
    Rcpp::traits::input_parameter< bool >::type icept(iceptSEXP);
    Rcpp::traits::input_parameter< bool >::type standardize(standardizeSEXP);
    Rcpp::traits::input_parameter< bool >::type singular(singularSEXP);
    rcpp_result_gen = Rcpp::wrap(bayeslm(Y, X, beta_hat, beta, penalize, block_vec, rank_vec, prior_type, user_prior_function, sigma, s2, kap2, nsamps, burn, skip, vglobal, verb, icept, standardize, singular));
    return rcpp_result_gen;
END_RCPP
}
// blasso
List blasso(arma::mat Y, arma::mat X, arma::uvec penalize, arma::vec block_vec, int prior_type, double sigma, double s2, double kap2, int nsamps, int burn, int skip, double vglobal, bool verb, bool icept, bool standardize, bool singular);
RcppExport SEXP bayeslm_blasso(SEXP YSEXP, SEXP XSEXP, SEXP penalizeSEXP, SEXP block_vecSEXP, SEXP prior_typeSEXP, SEXP sigmaSEXP, SEXP s2SEXP, SEXP kap2SEXP, SEXP nsampsSEXP, SEXP burnSEXP, SEXP skipSEXP, SEXP vglobalSEXP, SEXP verbSEXP, SEXP iceptSEXP, SEXP standardizeSEXP, SEXP singularSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type penalize(penalizeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type block_vec(block_vecSEXP);
    Rcpp::traits::input_parameter< int >::type prior_type(prior_typeSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< double >::type kap2(kap2SEXP);
    Rcpp::traits::input_parameter< int >::type nsamps(nsampsSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< double >::type vglobal(vglobalSEXP);
    Rcpp::traits::input_parameter< bool >::type verb(verbSEXP);
    Rcpp::traits::input_parameter< bool >::type icept(iceptSEXP);
    Rcpp::traits::input_parameter< bool >::type standardize(standardizeSEXP);
    Rcpp::traits::input_parameter< bool >::type singular(singularSEXP);
    rcpp_result_gen = Rcpp::wrap(blasso(Y, X, penalize, block_vec, prior_type, sigma, s2, kap2, nsamps, burn, skip, vglobal, verb, icept, standardize, singular));
    return rcpp_result_gen;
END_RCPP
}
// horseshoe
List horseshoe(arma::mat Y, arma::mat X, arma::uvec penalize, arma::vec block_vec, int prior_type, Rcpp::Nullable<Rcpp::Function> user_prior_function, double sigma, double s2, double kap2, int nsamps, int burn, int skip, double vglobal, bool verb, bool icept, bool standardize, bool singular);
RcppExport SEXP bayeslm_horseshoe(SEXP YSEXP, SEXP XSEXP, SEXP penalizeSEXP, SEXP block_vecSEXP, SEXP prior_typeSEXP, SEXP user_prior_functionSEXP, SEXP sigmaSEXP, SEXP s2SEXP, SEXP kap2SEXP, SEXP nsampsSEXP, SEXP burnSEXP, SEXP skipSEXP, SEXP vglobalSEXP, SEXP verbSEXP, SEXP iceptSEXP, SEXP standardizeSEXP, SEXP singularSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type penalize(penalizeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type block_vec(block_vecSEXP);
    Rcpp::traits::input_parameter< int >::type prior_type(prior_typeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::Function> >::type user_prior_function(user_prior_functionSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< double >::type kap2(kap2SEXP);
    Rcpp::traits::input_parameter< int >::type nsamps(nsampsSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< double >::type vglobal(vglobalSEXP);
    Rcpp::traits::input_parameter< bool >::type verb(verbSEXP);
    Rcpp::traits::input_parameter< bool >::type icept(iceptSEXP);
    Rcpp::traits::input_parameter< bool >::type standardize(standardizeSEXP);
    Rcpp::traits::input_parameter< bool >::type singular(singularSEXP);
    rcpp_result_gen = Rcpp::wrap(horseshoe(Y, X, penalize, block_vec, prior_type, user_prior_function, sigma, s2, kap2, nsamps, burn, skip, vglobal, verb, icept, standardize, singular));
    return rcpp_result_gen;
END_RCPP
}
// nonlocal
List nonlocal(arma::mat Y, arma::mat X, arma::vec prior_mean, arma::uvec penalize, arma::vec block_vec, int prior_type, double sigma, double s2, double kap2, int nsamps, int burn, int skip, double vglobal, bool verb, bool icept, bool standardize, bool singular);
RcppExport SEXP bayeslm_nonlocal(SEXP YSEXP, SEXP XSEXP, SEXP prior_meanSEXP, SEXP penalizeSEXP, SEXP block_vecSEXP, SEXP prior_typeSEXP, SEXP sigmaSEXP, SEXP s2SEXP, SEXP kap2SEXP, SEXP nsampsSEXP, SEXP burnSEXP, SEXP skipSEXP, SEXP vglobalSEXP, SEXP verbSEXP, SEXP iceptSEXP, SEXP standardizeSEXP, SEXP singularSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type prior_mean(prior_meanSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type penalize(penalizeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type block_vec(block_vecSEXP);
    Rcpp::traits::input_parameter< int >::type prior_type(prior_typeSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< double >::type kap2(kap2SEXP);
    Rcpp::traits::input_parameter< int >::type nsamps(nsampsSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< double >::type vglobal(vglobalSEXP);
    Rcpp::traits::input_parameter< bool >::type verb(verbSEXP);
    Rcpp::traits::input_parameter< bool >::type icept(iceptSEXP);
    Rcpp::traits::input_parameter< bool >::type standardize(standardizeSEXP);
    Rcpp::traits::input_parameter< bool >::type singular(singularSEXP);
    rcpp_result_gen = Rcpp::wrap(nonlocal(Y, X, prior_mean, penalize, block_vec, prior_type, sigma, s2, kap2, nsamps, burn, skip, vglobal, verb, icept, standardize, singular));
    return rcpp_result_gen;
END_RCPP
}
// ridge
List ridge(arma::mat Y, arma::mat X, arma::uvec penalize, arma::vec block_vec, int prior_type, double sigma, double s2, double kap2, int nsamps, int burn, int skip, double vglobal, bool verb, bool icept, bool standardize, bool singular);
RcppExport SEXP bayeslm_ridge(SEXP YSEXP, SEXP XSEXP, SEXP penalizeSEXP, SEXP block_vecSEXP, SEXP prior_typeSEXP, SEXP sigmaSEXP, SEXP s2SEXP, SEXP kap2SEXP, SEXP nsampsSEXP, SEXP burnSEXP, SEXP skipSEXP, SEXP vglobalSEXP, SEXP verbSEXP, SEXP iceptSEXP, SEXP standardizeSEXP, SEXP singularSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type penalize(penalizeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type block_vec(block_vecSEXP);
    Rcpp::traits::input_parameter< int >::type prior_type(prior_typeSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< double >::type kap2(kap2SEXP);
    Rcpp::traits::input_parameter< int >::type nsamps(nsampsSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< double >::type vglobal(vglobalSEXP);
    Rcpp::traits::input_parameter< bool >::type verb(verbSEXP);
    Rcpp::traits::input_parameter< bool >::type icept(iceptSEXP);
    Rcpp::traits::input_parameter< bool >::type standardize(standardizeSEXP);
    Rcpp::traits::input_parameter< bool >::type singular(singularSEXP);
    rcpp_result_gen = Rcpp::wrap(ridge(Y, X, penalize, block_vec, prior_type, sigma, s2, kap2, nsamps, burn, skip, vglobal, verb, icept, standardize, singular));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"bayeslm_sharkfin", (DL_FUNC) &bayeslm_sharkfin, 17},
    {"bayeslm_bayeslm", (DL_FUNC) &bayeslm_bayeslm, 20},
    {"bayeslm_blasso", (DL_FUNC) &bayeslm_blasso, 16},
    {"bayeslm_horseshoe", (DL_FUNC) &bayeslm_horseshoe, 17},
    {"bayeslm_nonlocal", (DL_FUNC) &bayeslm_nonlocal, 17},
    {"bayeslm_ridge", (DL_FUNC) &bayeslm_ridge, 16},
    {NULL, NULL, 0}
};

RcppExport void R_init_bayeslm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}