// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef __RollingWindow_RcppExports_h__
#define __RollingWindow_RcppExports_h__

#include <Rcpp.h>

namespace RollingWindow {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("RollingWindow", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("RollingWindow", "RollingWindow_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in RollingWindow");
            }
        }
    }

    inline NumericVector RollingBeta(const NumericVector& x, const NumericVector& y, int window, bool pop = false, bool expanding = false) {
        typedef SEXP(*Ptr_RollingBeta)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_RollingBeta p_RollingBeta = NULL;
        if (p_RollingBeta == NULL) {
            validateSignature("NumericVector(*RollingBeta)(const NumericVector&,const NumericVector&,int,bool,bool)");
            p_RollingBeta = (Ptr_RollingBeta)R_GetCCallable("RollingWindow", "RollingWindow_RollingBeta");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingBeta(Rcpp::wrap(x), Rcpp::wrap(y), Rcpp::wrap(window), Rcpp::wrap(pop), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericMatrix RollingCompound(const SEXP& x, int window, long double scale = 1.0, bool expanding = false) {
        typedef SEXP(*Ptr_RollingCompound)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_RollingCompound p_RollingCompound = NULL;
        if (p_RollingCompound == NULL) {
            validateSignature("NumericMatrix(*RollingCompound)(const SEXP&,int,long double,bool)");
            p_RollingCompound = (Ptr_RollingCompound)R_GetCCallable("RollingWindow", "RollingWindow_RollingCompound");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingCompound(Rcpp::wrap(x), Rcpp::wrap(window), Rcpp::wrap(scale), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericMatrix >(__result);
    }

    inline NumericVector RollingCov(const NumericVector& x, const NumericVector& y, int window, bool pop = false, bool expanding = false) {
        typedef SEXP(*Ptr_RollingCov)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_RollingCov p_RollingCov = NULL;
        if (p_RollingCov == NULL) {
            validateSignature("NumericVector(*RollingCov)(const NumericVector&,const NumericVector&,int,bool,bool)");
            p_RollingCov = (Ptr_RollingCov)R_GetCCallable("RollingWindow", "RollingWindow_RollingCov");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingCov(Rcpp::wrap(x), Rcpp::wrap(y), Rcpp::wrap(window), Rcpp::wrap(pop), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector RollingCorr(const NumericVector& x, const NumericVector& y, int window, bool pop = false, bool expanding = false) {
        typedef SEXP(*Ptr_RollingCorr)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_RollingCorr p_RollingCorr = NULL;
        if (p_RollingCorr == NULL) {
            validateSignature("NumericVector(*RollingCorr)(const NumericVector&,const NumericVector&,int,bool,bool)");
            p_RollingCorr = (Ptr_RollingCorr)R_GetCCallable("RollingWindow", "RollingWindow_RollingCorr");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingCorr(Rcpp::wrap(x), Rcpp::wrap(y), Rcpp::wrap(window), Rcpp::wrap(pop), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericMatrix RollingKurt(const SEXP& x, int window, bool pop = false, bool expanding = false) {
        typedef SEXP(*Ptr_RollingKurt)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_RollingKurt p_RollingKurt = NULL;
        if (p_RollingKurt == NULL) {
            validateSignature("NumericMatrix(*RollingKurt)(const SEXP&,int,bool,bool)");
            p_RollingKurt = (Ptr_RollingKurt)R_GetCCallable("RollingWindow", "RollingWindow_RollingKurt");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingKurt(Rcpp::wrap(x), Rcpp::wrap(window), Rcpp::wrap(pop), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericMatrix >(__result);
    }

    inline NumericMatrix RollingMax(const SEXP& x, int window, bool expanding = false) {
        typedef SEXP(*Ptr_RollingMax)(SEXP,SEXP,SEXP);
        static Ptr_RollingMax p_RollingMax = NULL;
        if (p_RollingMax == NULL) {
            validateSignature("NumericMatrix(*RollingMax)(const SEXP&,int,bool)");
            p_RollingMax = (Ptr_RollingMax)R_GetCCallable("RollingWindow", "RollingWindow_RollingMax");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingMax(Rcpp::wrap(x), Rcpp::wrap(window), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericMatrix >(__result);
    }

    inline NumericMatrix RollingMean(const SEXP& x, int window, bool expanding = false) {
        typedef SEXP(*Ptr_RollingMean)(SEXP,SEXP,SEXP);
        static Ptr_RollingMean p_RollingMean = NULL;
        if (p_RollingMean == NULL) {
            validateSignature("NumericMatrix(*RollingMean)(const SEXP&,int,bool)");
            p_RollingMean = (Ptr_RollingMean)R_GetCCallable("RollingWindow", "RollingWindow_RollingMean");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingMean(Rcpp::wrap(x), Rcpp::wrap(window), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericMatrix >(__result);
    }

    inline NumericVector RollingMAE(const NumericVector& x, const NumericVector& y, int window, bool expanding = false) {
        typedef SEXP(*Ptr_RollingMAE)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_RollingMAE p_RollingMAE = NULL;
        if (p_RollingMAE == NULL) {
            validateSignature("NumericVector(*RollingMAE)(const NumericVector&,const NumericVector&,int,bool)");
            p_RollingMAE = (Ptr_RollingMAE)R_GetCCallable("RollingWindow", "RollingWindow_RollingMAE");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingMAE(Rcpp::wrap(x), Rcpp::wrap(y), Rcpp::wrap(window), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector RollingMS(const SEXP& x, int window, bool expanding = false) {
        typedef SEXP(*Ptr_RollingMS)(SEXP,SEXP,SEXP);
        static Ptr_RollingMS p_RollingMS = NULL;
        if (p_RollingMS == NULL) {
            validateSignature("NumericVector(*RollingMS)(const SEXP&,int,bool)");
            p_RollingMS = (Ptr_RollingMS)R_GetCCallable("RollingWindow", "RollingWindow_RollingMS");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingMS(Rcpp::wrap(x), Rcpp::wrap(window), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector RollingMSE(const NumericVector& x, const NumericVector& y, int window, bool expanding = false) {
        typedef SEXP(*Ptr_RollingMSE)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_RollingMSE p_RollingMSE = NULL;
        if (p_RollingMSE == NULL) {
            validateSignature("NumericVector(*RollingMSE)(const NumericVector&,const NumericVector&,int,bool)");
            p_RollingMSE = (Ptr_RollingMSE)R_GetCCallable("RollingWindow", "RollingWindow_RollingMSE");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingMSE(Rcpp::wrap(x), Rcpp::wrap(y), Rcpp::wrap(window), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericMatrix RollingMedian(const SEXP& x, int window, bool expanding = false) {
        typedef SEXP(*Ptr_RollingMedian)(SEXP,SEXP,SEXP);
        static Ptr_RollingMedian p_RollingMedian = NULL;
        if (p_RollingMedian == NULL) {
            validateSignature("NumericMatrix(*RollingMedian)(const SEXP&,int,bool)");
            p_RollingMedian = (Ptr_RollingMedian)R_GetCCallable("RollingWindow", "RollingWindow_RollingMedian");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingMedian(Rcpp::wrap(x), Rcpp::wrap(window), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericMatrix >(__result);
    }

    inline NumericMatrix RollingMin(const SEXP& x, int window, bool expanding = false) {
        typedef SEXP(*Ptr_RollingMin)(SEXP,SEXP,SEXP);
        static Ptr_RollingMin p_RollingMin = NULL;
        if (p_RollingMin == NULL) {
            validateSignature("NumericMatrix(*RollingMin)(const SEXP&,int,bool)");
            p_RollingMin = (Ptr_RollingMin)R_GetCCallable("RollingWindow", "RollingWindow_RollingMin");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingMin(Rcpp::wrap(x), Rcpp::wrap(window), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericMatrix >(__result);
    }

    inline NumericMatrix RollingProd(const SEXP& x, int window, bool expanding = false) {
        typedef SEXP(*Ptr_RollingProd)(SEXP,SEXP,SEXP);
        static Ptr_RollingProd p_RollingProd = NULL;
        if (p_RollingProd == NULL) {
            validateSignature("NumericMatrix(*RollingProd)(const SEXP&,int,bool)");
            p_RollingProd = (Ptr_RollingProd)R_GetCCallable("RollingWindow", "RollingWindow_RollingProd");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingProd(Rcpp::wrap(x), Rcpp::wrap(window), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericMatrix >(__result);
    }

    inline NumericVector RollingRMSE(const NumericVector& x, const NumericVector& y, int window, bool expanding = false) {
        typedef SEXP(*Ptr_RollingRMSE)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_RollingRMSE p_RollingRMSE = NULL;
        if (p_RollingRMSE == NULL) {
            validateSignature("NumericVector(*RollingRMSE)(const NumericVector&,const NumericVector&,int,bool)");
            p_RollingRMSE = (Ptr_RollingRMSE)R_GetCCallable("RollingWindow", "RollingWindow_RollingRMSE");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingRMSE(Rcpp::wrap(x), Rcpp::wrap(y), Rcpp::wrap(window), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericMatrix RollingSkew(const SEXP& x, int window, bool pop = false, bool expanding = false) {
        typedef SEXP(*Ptr_RollingSkew)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_RollingSkew p_RollingSkew = NULL;
        if (p_RollingSkew == NULL) {
            validateSignature("NumericMatrix(*RollingSkew)(const SEXP&,int,bool,bool)");
            p_RollingSkew = (Ptr_RollingSkew)R_GetCCallable("RollingWindow", "RollingWindow_RollingSkew");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingSkew(Rcpp::wrap(x), Rcpp::wrap(window), Rcpp::wrap(pop), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericMatrix >(__result);
    }

    inline NumericMatrix RollingStd(const SEXP& x, int window, bool pop = false, bool expanding = false) {
        typedef SEXP(*Ptr_RollingStd)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_RollingStd p_RollingStd = NULL;
        if (p_RollingStd == NULL) {
            validateSignature("NumericMatrix(*RollingStd)(const SEXP&,int,bool,bool)");
            p_RollingStd = (Ptr_RollingStd)R_GetCCallable("RollingWindow", "RollingWindow_RollingStd");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingStd(Rcpp::wrap(x), Rcpp::wrap(window), Rcpp::wrap(pop), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericMatrix >(__result);
    }

    inline NumericMatrix RollingSum(const SEXP& x, int window, bool expanding = false) {
        typedef SEXP(*Ptr_RollingSum)(SEXP,SEXP,SEXP);
        static Ptr_RollingSum p_RollingSum = NULL;
        if (p_RollingSum == NULL) {
            validateSignature("NumericMatrix(*RollingSum)(const SEXP&,int,bool)");
            p_RollingSum = (Ptr_RollingSum)R_GetCCallable("RollingWindow", "RollingWindow_RollingSum");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingSum(Rcpp::wrap(x), Rcpp::wrap(window), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericMatrix >(__result);
    }

    inline NumericVector RollingSumprod(const NumericVector& x, const NumericVector& y, int window, bool expanding = false) {
        typedef SEXP(*Ptr_RollingSumprod)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_RollingSumprod p_RollingSumprod = NULL;
        if (p_RollingSumprod == NULL) {
            validateSignature("NumericVector(*RollingSumprod)(const NumericVector&,const NumericVector&,int,bool)");
            p_RollingSumprod = (Ptr_RollingSumprod)R_GetCCallable("RollingWindow", "RollingWindow_RollingSumprod");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingSumprod(Rcpp::wrap(x), Rcpp::wrap(y), Rcpp::wrap(window), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector RollingSS(const NumericVector& x, int window, bool expanding = false) {
        typedef SEXP(*Ptr_RollingSS)(SEXP,SEXP,SEXP);
        static Ptr_RollingSS p_RollingSS = NULL;
        if (p_RollingSS == NULL) {
            validateSignature("NumericVector(*RollingSS)(const NumericVector&,int,bool)");
            p_RollingSS = (Ptr_RollingSS)R_GetCCallable("RollingWindow", "RollingWindow_RollingSS");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingSS(Rcpp::wrap(x), Rcpp::wrap(window), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector RollingSSE(const NumericVector& x, const NumericVector& y, int window, bool expanding = false) {
        typedef SEXP(*Ptr_RollingSSE)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_RollingSSE p_RollingSSE = NULL;
        if (p_RollingSSE == NULL) {
            validateSignature("NumericVector(*RollingSSE)(const NumericVector&,const NumericVector&,int,bool)");
            p_RollingSSE = (Ptr_RollingSSE)R_GetCCallable("RollingWindow", "RollingWindow_RollingSSE");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingSSE(Rcpp::wrap(x), Rcpp::wrap(y), Rcpp::wrap(window), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericMatrix RollingVar(const SEXP& x, int window, bool pop = false, bool expanding = false) {
        typedef SEXP(*Ptr_RollingVar)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_RollingVar p_RollingVar = NULL;
        if (p_RollingVar == NULL) {
            validateSignature("NumericMatrix(*RollingVar)(const SEXP&,int,bool,bool)");
            p_RollingVar = (Ptr_RollingVar)R_GetCCallable("RollingWindow", "RollingWindow_RollingVar");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingVar(Rcpp::wrap(x), Rcpp::wrap(window), Rcpp::wrap(pop), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericMatrix >(__result);
    }

    inline NumericMatrix RollingZscore(const SEXP& x, int window, bool pop = false, bool expanding = false) {
        typedef SEXP(*Ptr_RollingZscore)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_RollingZscore p_RollingZscore = NULL;
        if (p_RollingZscore == NULL) {
            validateSignature("NumericMatrix(*RollingZscore)(const SEXP&,int,bool,bool)");
            p_RollingZscore = (Ptr_RollingZscore)R_GetCCallable("RollingWindow", "RollingWindow_RollingZscore");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_RollingZscore(Rcpp::wrap(x), Rcpp::wrap(window), Rcpp::wrap(pop), Rcpp::wrap(expanding));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericMatrix >(__result);
    }

}

#endif // __RollingWindow_RcppExports_h__
