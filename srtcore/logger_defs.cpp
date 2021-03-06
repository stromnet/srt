/*
  WARNING: Generated from ../scripts/generate-logging-defs.tcl

  DO NOT MODIFY.

  Copyright applies as per the generator script.
 */


#include "srt.h"
#include "logging.h"
#include "logger_defs.h"

namespace srt_logging { AllFaOn logger_fa_all; }
// We need it outside the namespace to preserve the global name.
// It's a part of "hidden API" (used by applications)
SRT_API srt_logging::LogConfig srt_logger_config(srt_logging::logger_fa_all.allfa);

namespace srt_logging
{
    Logger glog(SRT_LOGFA_GENERAL, srt_logger_config, "SRT.g");

    Logger mglog(SRT_LOGFA_CONTROL, srt_logger_config, "SRT.mg");
    Logger dlog(SRT_LOGFA_DATA, srt_logger_config, "SRT.d");
    Logger tslog(SRT_LOGFA_TSBPD, srt_logger_config, "SRT.ts");
    Logger rxlog(SRT_LOGFA_REXMIT, srt_logger_config, "SRT.rx");

    Logger cclog(SRT_LOGFA_CONGEST, srt_logger_config, "SRT.cc");
} // namespace srt_logging
