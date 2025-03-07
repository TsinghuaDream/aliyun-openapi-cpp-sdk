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

#include <alibabacloud/schedulerx2/model/CreateAppGroupRequest.h>

using AlibabaCloud::Schedulerx2::Model::CreateAppGroupRequest;

CreateAppGroupRequest::CreateAppGroupRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "CreateAppGroup") {
  setMethod(HttpRequest::Method::Get);
}

CreateAppGroupRequest::~CreateAppGroupRequest() {}

int CreateAppGroupRequest::getMaxJobs() const {
  return maxJobs_;
}

void CreateAppGroupRequest::setMaxJobs(int maxJobs) {
  maxJobs_ = maxJobs;
  setParameter(std::string("MaxJobs"), std::to_string(maxJobs));
}

std::string CreateAppGroupRequest::getNamespaceName() const {
  return namespaceName_;
}

void CreateAppGroupRequest::setNamespaceName(const std::string &namespaceName) {
  namespaceName_ = namespaceName;
  setParameter(std::string("NamespaceName"), namespaceName);
}

std::string CreateAppGroupRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void CreateAppGroupRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

bool CreateAppGroupRequest::getScheduleBusyWorkers() const {
  return scheduleBusyWorkers_;
}

void CreateAppGroupRequest::setScheduleBusyWorkers(bool scheduleBusyWorkers) {
  scheduleBusyWorkers_ = scheduleBusyWorkers;
  setParameter(std::string("ScheduleBusyWorkers"), scheduleBusyWorkers ? "true" : "false");
}

std::string CreateAppGroupRequest::getMetricsThresholdJson() const {
  return metricsThresholdJson_;
}

void CreateAppGroupRequest::setMetricsThresholdJson(const std::string &metricsThresholdJson) {
  metricsThresholdJson_ = metricsThresholdJson;
  setParameter(std::string("MetricsThresholdJson"), metricsThresholdJson);
}

std::string CreateAppGroupRequest::getGroupId() const {
  return groupId_;
}

void CreateAppGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string CreateAppGroupRequest::getDescription() const {
  return description_;
}

void CreateAppGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateAppGroupRequest::getMonitorConfigJson() const {
  return monitorConfigJson_;
}

void CreateAppGroupRequest::setMonitorConfigJson(const std::string &monitorConfigJson) {
  monitorConfigJson_ = monitorConfigJson;
  setParameter(std::string("MonitorConfigJson"), monitorConfigJson);
}

std::string CreateAppGroupRequest::getAppName() const {
  return appName_;
}

void CreateAppGroupRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string CreateAppGroupRequest::getRegionId() const {
  return regionId_;
}

void CreateAppGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateAppGroupRequest::get_Namespace() const {
  return _namespace_;
}

void CreateAppGroupRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string CreateAppGroupRequest::getAlarmJson() const {
  return alarmJson_;
}

void CreateAppGroupRequest::setAlarmJson(const std::string &alarmJson) {
  alarmJson_ = alarmJson;
  setParameter(std::string("AlarmJson"), alarmJson);
}

std::string CreateAppGroupRequest::getAppKey() const {
  return appKey_;
}

void CreateAppGroupRequest::setAppKey(const std::string &appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), appKey);
}

std::string CreateAppGroupRequest::getMonitorContactsJson() const {
  return monitorContactsJson_;
}

void CreateAppGroupRequest::setMonitorContactsJson(const std::string &monitorContactsJson) {
  monitorContactsJson_ = monitorContactsJson;
  setParameter(std::string("MonitorContactsJson"), monitorContactsJson);
}

