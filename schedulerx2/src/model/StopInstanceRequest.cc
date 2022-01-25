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

#include <alibabacloud/schedulerx2/model/StopInstanceRequest.h>

using AlibabaCloud::Schedulerx2::Model::StopInstanceRequest;

StopInstanceRequest::StopInstanceRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "StopInstance") {
  setMethod(HttpRequest::Method::Get);
}

StopInstanceRequest::~StopInstanceRequest() {}

std::string StopInstanceRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void StopInstanceRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string StopInstanceRequest::getGroupId() const {
  return groupId_;
}

void StopInstanceRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

long StopInstanceRequest::getJobId() const {
  return jobId_;
}

void StopInstanceRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

long StopInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void StopInstanceRequest::setInstanceId(long instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

std::string StopInstanceRequest::getRegionId() const {
  return regionId_;
}

void StopInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string StopInstanceRequest::get_Namespace() const {
  return _namespace_;
}

void StopInstanceRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

