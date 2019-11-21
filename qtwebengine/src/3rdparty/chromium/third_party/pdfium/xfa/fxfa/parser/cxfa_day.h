// Copyright 2017 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef XFA_FXFA_PARSER_CXFA_DAY_H_
#define XFA_FXFA_PARSER_CXFA_DAY_H_

#include "xfa/fxfa/parser/cxfa_node.h"

class CXFA_Day : public CXFA_Node {
 public:
  CXFA_Day(CXFA_Document* doc, XFA_PacketType packet);
  ~CXFA_Day() override;
};

#endif  // XFA_FXFA_PARSER_CXFA_DAY_H_