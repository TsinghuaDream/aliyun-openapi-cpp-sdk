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

#include <alibabacloud/elasticsearch/model/DeleteILMPolicyRequest.h>

using AlibabaCloud::Elasticsearch::Model::DeleteILMPolicyRequest;

DeleteILMPolicyRequest::DeleteILMPolicyRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/ilm-policies/[PolicyName]"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteILMPolicyRequest::~DeleteILMPolicyRequest() {}

std::string DeleteILMPolicyRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteILMPolicyRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteILMPolicyRequest::getPolicyName() const {
  return policyName_;
}

void DeleteILMPolicyRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

