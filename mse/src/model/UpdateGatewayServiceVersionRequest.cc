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

#include <alibabacloud/mse/model/UpdateGatewayServiceVersionRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewayServiceVersionRequest;

UpdateGatewayServiceVersionRequest::UpdateGatewayServiceVersionRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewayServiceVersion") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayServiceVersionRequest::~UpdateGatewayServiceVersionRequest() {}

std::string UpdateGatewayServiceVersionRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewayServiceVersionRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string UpdateGatewayServiceVersionRequest::getServiceVersion() const {
  return serviceVersion_;
}

void UpdateGatewayServiceVersionRequest::setServiceVersion(const std::string &serviceVersion) {
  serviceVersion_ = serviceVersion;
  setParameter(std::string("ServiceVersion"), serviceVersion);
}

std::string UpdateGatewayServiceVersionRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayServiceVersionRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

long UpdateGatewayServiceVersionRequest::getServiceId() const {
  return serviceId_;
}

void UpdateGatewayServiceVersionRequest::setServiceId(long serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), std::to_string(serviceId));
}

