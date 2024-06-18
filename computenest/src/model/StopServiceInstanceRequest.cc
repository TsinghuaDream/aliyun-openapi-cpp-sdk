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

#include <alibabacloud/computenest/model/StopServiceInstanceRequest.h>

using AlibabaCloud::ComputeNest::Model::StopServiceInstanceRequest;

StopServiceInstanceRequest::StopServiceInstanceRequest()
    : RpcServiceRequest("computenest", "2021-06-01", "StopServiceInstance") {
  setMethod(HttpRequest::Method::Post);
}

StopServiceInstanceRequest::~StopServiceInstanceRequest() {}

std::string StopServiceInstanceRequest::getClientToken() const {
  return clientToken_;
}

void StopServiceInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string StopServiceInstanceRequest::getRegionId() const {
  return regionId_;
}

void StopServiceInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string StopServiceInstanceRequest::getServiceInstanceId() const {
  return serviceInstanceId_;
}

void StopServiceInstanceRequest::setServiceInstanceId(const std::string &serviceInstanceId) {
  serviceInstanceId_ = serviceInstanceId;
  setParameter(std::string("ServiceInstanceId"), serviceInstanceId);
}

