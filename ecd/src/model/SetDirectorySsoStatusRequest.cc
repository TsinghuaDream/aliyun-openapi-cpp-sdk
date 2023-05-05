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

#include <alibabacloud/ecd/model/SetDirectorySsoStatusRequest.h>

using AlibabaCloud::Ecd::Model::SetDirectorySsoStatusRequest;

SetDirectorySsoStatusRequest::SetDirectorySsoStatusRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "SetDirectorySsoStatus") {
  setMethod(HttpRequest::Method::Post);
}

SetDirectorySsoStatusRequest::~SetDirectorySsoStatusRequest() {}

std::string SetDirectorySsoStatusRequest::getRegionId() const {
  return regionId_;
}

void SetDirectorySsoStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool SetDirectorySsoStatusRequest::getEnableSso() const {
  return enableSso_;
}

void SetDirectorySsoStatusRequest::setEnableSso(bool enableSso) {
  enableSso_ = enableSso;
  setParameter(std::string("EnableSso"), enableSso ? "true" : "false");
}

std::string SetDirectorySsoStatusRequest::getDirectoryId() const {
  return directoryId_;
}

void SetDirectorySsoStatusRequest::setDirectoryId(const std::string &directoryId) {
  directoryId_ = directoryId;
  setParameter(std::string("DirectoryId"), directoryId);
}

