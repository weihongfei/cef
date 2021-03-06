// Copyright (c) 2021 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=0c4282bac5261394776306ab376b8839a1690a57$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_BROWSER_PROCESS_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_BROWSER_PROCESS_HANDLER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include <vector>
#include "include/capi/cef_browser_process_handler_capi.h"
#include "include/cef_browser_process_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefBrowserProcessHandlerCToCpp
    : public CefCToCppRefCounted<CefBrowserProcessHandlerCToCpp,
                                 CefBrowserProcessHandler,
                                 cef_browser_process_handler_t> {
 public:
  CefBrowserProcessHandlerCToCpp();
  virtual ~CefBrowserProcessHandlerCToCpp();

  // CefBrowserProcessHandler methods.
  void GetCookieableSchemes(std::vector<CefString>& schemes,
                            bool& include_defaults) override;
  void OnContextInitialized() override;
  void OnBeforeChildProcessLaunch(
      CefRefPtr<CefCommandLine> command_line) override;
  CefRefPtr<CefPrintHandler> GetPrintHandler() override;
  void OnScheduleMessagePumpWork(int64 delay_ms) override;
  CefRefPtr<CefClient> GetDefaultClient() override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_BROWSER_PROCESS_HANDLER_CTOCPP_H_
