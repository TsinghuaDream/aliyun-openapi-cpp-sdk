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

#include <alibabacloud/mse/model/ListAnsServiceClustersRequest.h>

using AlibabaCloud::Mse::Model::ListAnsServiceClustersRequest;

ListAnsServiceClustersRequest::ListAnsServiceClustersRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListAnsServiceClusters") {
  setMethod(HttpRequest::Method::Get);
}

ListAnsServiceClustersRequest::~ListAnsServiceClustersRequest() {}

std::string ListAnsServiceClustersRequest::getClusterName() const {
  return clusterName_;
}

void ListAnsServiceClustersRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

std::string ListAnsServiceClustersRequest::getClusterId() const {
  return clusterId_;
}

void ListAnsServiceClustersRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int ListAnsServiceClustersRequest::getPageNum() const {
  return pageNum_;
}

void ListAnsServiceClustersRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListAnsServiceClustersRequest::getGroupName() const {
  return groupName_;
}

void ListAnsServiceClustersRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string ListAnsServiceClustersRequest::getInstanceId() const {
  return instanceId_;
}

void ListAnsServiceClustersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListAnsServiceClustersRequest::getNamespaceId() const {
  return namespaceId_;
}

void ListAnsServiceClustersRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string ListAnsServiceClustersRequest::getRequestPars() const {
  return requestPars_;
}

void ListAnsServiceClustersRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

int ListAnsServiceClustersRequest::getPageSize() const {
  return pageSize_;
}

void ListAnsServiceClustersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAnsServiceClustersRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListAnsServiceClustersRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string ListAnsServiceClustersRequest::getServiceName() const {
  return serviceName_;
}

void ListAnsServiceClustersRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

