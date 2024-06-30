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

#include <alibabacloud/quotas/model/GetQuotaApplicationApprovalRequest.h>

using AlibabaCloud::Quotas::Model::GetQuotaApplicationApprovalRequest;

GetQuotaApplicationApprovalRequest::GetQuotaApplicationApprovalRequest()
    : RpcServiceRequest("quotas", "2020-05-10", "GetQuotaApplicationApproval") {
  setMethod(HttpRequest::Method::Post);
}

GetQuotaApplicationApprovalRequest::~GetQuotaApplicationApprovalRequest() {}

std::string GetQuotaApplicationApprovalRequest::getOriginalContext() const {
  return originalContext_;
}

void GetQuotaApplicationApprovalRequest::setOriginalContext(const std::string &originalContext) {
  originalContext_ = originalContext;
  setBodyParameter(std::string("OriginalContext"), originalContext);
}

std::string GetQuotaApplicationApprovalRequest::getApplicationId() const {
  return applicationId_;
}

void GetQuotaApplicationApprovalRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setBodyParameter(std::string("ApplicationId"), applicationId);
}

