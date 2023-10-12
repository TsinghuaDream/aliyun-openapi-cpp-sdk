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

#include <alibabacloud/oceanbasepro/model/DescribeSQLPlansRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeSQLPlansRequest;

DescribeSQLPlansRequest::DescribeSQLPlansRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeSQLPlans") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSQLPlansRequest::~DescribeSQLPlansRequest() {}

std::string DescribeSQLPlansRequest::getSQLId() const {
  return sQLId_;
}

void DescribeSQLPlansRequest::setSQLId(const std::string &sQLId) {
  sQLId_ = sQLId;
  setBodyParameter(std::string("SQLId"), sQLId);
}

std::string DescribeSQLPlansRequest::getTenantId() const {
  return tenantId_;
}

void DescribeSQLPlansRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

