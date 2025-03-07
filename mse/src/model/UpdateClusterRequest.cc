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

#include <alibabacloud/mse/model/UpdateClusterRequest.h>

using AlibabaCloud::Mse::Model::UpdateClusterRequest;

UpdateClusterRequest::UpdateClusterRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateCluster") {
  setMethod(HttpRequest::Method::Post);
}

UpdateClusterRequest::~UpdateClusterRequest() {}

std::string UpdateClusterRequest::getClusterAliasName() const {
  return clusterAliasName_;
}

void UpdateClusterRequest::setClusterAliasName(const std::string &clusterAliasName) {
  clusterAliasName_ = clusterAliasName;
  setParameter(std::string("ClusterAliasName"), clusterAliasName);
}

std::string UpdateClusterRequest::getClusterId() const {
  return clusterId_;
}

void UpdateClusterRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string UpdateClusterRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateClusterRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateClusterRequest::getRequestPars() const {
  return requestPars_;
}

void UpdateClusterRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string UpdateClusterRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateClusterRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

