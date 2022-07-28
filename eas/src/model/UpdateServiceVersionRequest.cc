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

#include <alibabacloud/eas/model/UpdateServiceVersionRequest.h>

using AlibabaCloud::Eas::Model::UpdateServiceVersionRequest;

UpdateServiceVersionRequest::UpdateServiceVersionRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/services/[ClusterId]/[ServiceName]/version"};
  setMethod(HttpRequest::Method::Put);
}

UpdateServiceVersionRequest::~UpdateServiceVersionRequest() {}

string UpdateServiceVersionRequest::getServiceName() const {
  return serviceName_;
}

void UpdateServiceVersionRequest::setServiceName(string serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), std::to_string(serviceName));
}

string UpdateServiceVersionRequest::getClusterId() const {
  return clusterId_;
}

void UpdateServiceVersionRequest::setClusterId(string clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), std::to_string(clusterId));
}

std::string UpdateServiceVersionRequest::getBody() const {
  return body_;
}

void UpdateServiceVersionRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

