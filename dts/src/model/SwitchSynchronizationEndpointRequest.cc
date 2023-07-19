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

#include <alibabacloud/dts/model/SwitchSynchronizationEndpointRequest.h>

using AlibabaCloud::Dts::Model::SwitchSynchronizationEndpointRequest;

SwitchSynchronizationEndpointRequest::SwitchSynchronizationEndpointRequest()
    : RpcServiceRequest("dts", "2019-09-01", "SwitchSynchronizationEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

SwitchSynchronizationEndpointRequest::~SwitchSynchronizationEndpointRequest() {}

std::string SwitchSynchronizationEndpointRequest::getEndpointInstanceType() const {
  return endpointInstanceType_;
}

void SwitchSynchronizationEndpointRequest::setEndpointInstanceType(const std::string &endpointInstanceType) {
  endpointInstanceType_ = endpointInstanceType;
  setParameter(std::string("Endpoint.InstanceType"), endpointInstanceType);
}

std::string SwitchSynchronizationEndpointRequest::getEndpointIP() const {
  return endpointIP_;
}

void SwitchSynchronizationEndpointRequest::setEndpointIP(const std::string &endpointIP) {
  endpointIP_ = endpointIP;
  setParameter(std::string("Endpoint.IP"), endpointIP);
}

std::string SwitchSynchronizationEndpointRequest::getOwnerId() const {
  return ownerId_;
}

void SwitchSynchronizationEndpointRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string SwitchSynchronizationEndpointRequest::getSynchronizationJobId() const {
  return synchronizationJobId_;
}

void SwitchSynchronizationEndpointRequest::setSynchronizationJobId(const std::string &synchronizationJobId) {
  synchronizationJobId_ = synchronizationJobId;
  setParameter(std::string("SynchronizationJobId"), synchronizationJobId);
}

std::string SwitchSynchronizationEndpointRequest::getEndpointType() const {
  return endpointType_;
}

void SwitchSynchronizationEndpointRequest::setEndpointType(const std::string &endpointType) {
  endpointType_ = endpointType;
  setParameter(std::string("Endpoint.Type"), endpointType);
}

std::string SwitchSynchronizationEndpointRequest::getEndpointPort() const {
  return endpointPort_;
}

void SwitchSynchronizationEndpointRequest::setEndpointPort(const std::string &endpointPort) {
  endpointPort_ = endpointPort;
  setParameter(std::string("Endpoint.Port"), endpointPort);
}

std::string SwitchSynchronizationEndpointRequest::getEndpointInstanceId() const {
  return endpointInstanceId_;
}

void SwitchSynchronizationEndpointRequest::setEndpointInstanceId(const std::string &endpointInstanceId) {
  endpointInstanceId_ = endpointInstanceId;
  setParameter(std::string("Endpoint.InstanceId"), endpointInstanceId);
}

std::string SwitchSynchronizationEndpointRequest::getSynchronizationDirection() const {
  return synchronizationDirection_;
}

void SwitchSynchronizationEndpointRequest::setSynchronizationDirection(const std::string &synchronizationDirection) {
  synchronizationDirection_ = synchronizationDirection;
  setParameter(std::string("SynchronizationDirection"), synchronizationDirection);
}

