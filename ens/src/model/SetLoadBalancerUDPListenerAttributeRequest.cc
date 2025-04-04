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

#include <alibabacloud/ens/model/SetLoadBalancerUDPListenerAttributeRequest.h>

using AlibabaCloud::Ens::Model::SetLoadBalancerUDPListenerAttributeRequest;

SetLoadBalancerUDPListenerAttributeRequest::SetLoadBalancerUDPListenerAttributeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "SetLoadBalancerUDPListenerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

SetLoadBalancerUDPListenerAttributeRequest::~SetLoadBalancerUDPListenerAttributeRequest() {}

std::string SetLoadBalancerUDPListenerAttributeRequest::getProtocol() const {
  return protocol_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

int SetLoadBalancerUDPListenerAttributeRequest::getEstablishedTimeout() const {
  return establishedTimeout_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setEstablishedTimeout(int establishedTimeout) {
  establishedTimeout_ = establishedTimeout;
  setParameter(std::string("EstablishedTimeout"), std::to_string(establishedTimeout));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckReq() const {
  return healthCheckReq_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckReq(const std::string &healthCheckReq) {
  healthCheckReq_ = healthCheckReq;
  setParameter(std::string("HealthCheckReq"), healthCheckReq);
}

int SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("HealthCheckInterval"), std::to_string(healthCheckInterval));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckExp() const {
  return healthCheckExp_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckExp(const std::string &healthCheckExp) {
  healthCheckExp_ = healthCheckExp;
  setParameter(std::string("HealthCheckExp"), healthCheckExp);
}

int SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckConnectTimeout() const {
  return healthCheckConnectTimeout_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckConnectTimeout(int healthCheckConnectTimeout) {
  healthCheckConnectTimeout_ = healthCheckConnectTimeout;
  setParameter(std::string("HealthCheckConnectTimeout"), std::to_string(healthCheckConnectTimeout));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getDescription() const {
  return description_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int SetLoadBalancerUDPListenerAttributeRequest::getUnhealthyThreshold() const {
  return unhealthyThreshold_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setUnhealthyThreshold(int unhealthyThreshold) {
  unhealthyThreshold_ = unhealthyThreshold;
  setParameter(std::string("UnhealthyThreshold"), std::to_string(unhealthyThreshold));
}

int SetLoadBalancerUDPListenerAttributeRequest::getHealthyThreshold() const {
  return healthyThreshold_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthyThreshold(int healthyThreshold) {
  healthyThreshold_ = healthyThreshold;
  setParameter(std::string("HealthyThreshold"), std::to_string(healthyThreshold));
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getScheduler() const {
  return scheduler_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

std::string SetLoadBalancerUDPListenerAttributeRequest::getEipTransmit() const {
  return eipTransmit_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setEipTransmit(const std::string &eipTransmit) {
  eipTransmit_ = eipTransmit;
  setParameter(std::string("EipTransmit"), eipTransmit);
}

int SetLoadBalancerUDPListenerAttributeRequest::getListenerPort() const {
  return listenerPort_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

int SetLoadBalancerUDPListenerAttributeRequest::getHealthCheckConnectPort() const {
  return healthCheckConnectPort_;
}

void SetLoadBalancerUDPListenerAttributeRequest::setHealthCheckConnectPort(int healthCheckConnectPort) {
  healthCheckConnectPort_ = healthCheckConnectPort;
  setParameter(std::string("HealthCheckConnectPort"), std::to_string(healthCheckConnectPort));
}

