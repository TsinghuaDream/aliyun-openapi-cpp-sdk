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

#include <alibabacloud/config/model/StartRemediationRequest.h>

using AlibabaCloud::Config::Model::StartRemediationRequest;

StartRemediationRequest::StartRemediationRequest()
    : RpcServiceRequest("config", "2020-09-07", "StartRemediation") {
  setMethod(HttpRequest::Method::Post);
}

StartRemediationRequest::~StartRemediationRequest() {}

std::string StartRemediationRequest::getConfigRuleId() const {
  return configRuleId_;
}

void StartRemediationRequest::setConfigRuleId(const std::string &configRuleId) {
  configRuleId_ = configRuleId;
  setParameter(std::string("ConfigRuleId"), configRuleId);
}

