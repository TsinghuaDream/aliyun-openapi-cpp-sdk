/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/csas/model/GetPrivateAccessPolicyRequest.h>

using AlibabaCloud::Csas::Model::GetPrivateAccessPolicyRequest;

GetPrivateAccessPolicyRequest::GetPrivateAccessPolicyRequest()
    : RpcServiceRequest("csas", "2023-01-20", "GetPrivateAccessPolicy") {
  setMethod(HttpRequest::Method::Get);
}

GetPrivateAccessPolicyRequest::~GetPrivateAccessPolicyRequest() {}

std::string GetPrivateAccessPolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void GetPrivateAccessPolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string GetPrivateAccessPolicyRequest::getPolicyId() const {
  return policyId_;
}

void GetPrivateAccessPolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

