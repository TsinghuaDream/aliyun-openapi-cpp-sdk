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

#include <alibabacloud/ecs/model/RunCommandRequest.h>

using AlibabaCloud::Ecs::Model::RunCommandRequest;

RunCommandRequest::RunCommandRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "RunCommand") {
  setMethod(HttpRequest::Method::Post);
}

RunCommandRequest::~RunCommandRequest() {}

long RunCommandRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RunCommandRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RunCommandRequest::getWorkingDir() const {
  return workingDir_;
}

void RunCommandRequest::setWorkingDir(const std::string &workingDir) {
  workingDir_ = workingDir;
  setParameter(std::string("WorkingDir"), workingDir);
}

std::string RunCommandRequest::getDescription() const {
  return description_;
}

void RunCommandRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string RunCommandRequest::getType() const {
  return type_;
}

void RunCommandRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string RunCommandRequest::getCommandContent() const {
  return commandContent_;
}

void RunCommandRequest::setCommandContent(const std::string &commandContent) {
  commandContent_ = commandContent;
  setParameter(std::string("CommandContent"), commandContent);
}

long RunCommandRequest::getTimeout() const {
  return timeout_;
}

void RunCommandRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string RunCommandRequest::getFrequency() const {
  return frequency_;
}

void RunCommandRequest::setFrequency(const std::string &frequency) {
  frequency_ = frequency;
  setParameter(std::string("Frequency"), frequency);
}

std::string RunCommandRequest::getRegionId() const {
  return regionId_;
}

void RunCommandRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RunCommandRequest::getContentEncoding() const {
  return contentEncoding_;
}

void RunCommandRequest::setContentEncoding(const std::string &contentEncoding) {
  contentEncoding_ = contentEncoding;
  setParameter(std::string("ContentEncoding"), contentEncoding);
}

std::string RunCommandRequest::getRepeatMode() const {
  return repeatMode_;
}

void RunCommandRequest::setRepeatMode(const std::string &repeatMode) {
  repeatMode_ = repeatMode;
  setParameter(std::string("RepeatMode"), repeatMode);
}

std::string RunCommandRequest::getWindowsPasswordName() const {
  return windowsPasswordName_;
}

void RunCommandRequest::setWindowsPasswordName(const std::string &windowsPasswordName) {
  windowsPasswordName_ = windowsPasswordName;
  setParameter(std::string("WindowsPasswordName"), windowsPasswordName);
}

bool RunCommandRequest::getKeepCommand() const {
  return keepCommand_;
}

void RunCommandRequest::setKeepCommand(bool keepCommand) {
  keepCommand_ = keepCommand;
  setParameter(std::string("KeepCommand"), keepCommand ? "true" : "false");
}

bool RunCommandRequest::getTimed() const {
  return timed_;
}

void RunCommandRequest::setTimed(bool timed) {
  timed_ = timed;
  setParameter(std::string("Timed"), timed ? "true" : "false");
}

std::string RunCommandRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RunCommandRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RunCommandRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RunCommandRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RunCommandRequest::getOwnerId() const {
  return ownerId_;
}

void RunCommandRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> RunCommandRequest::getInstanceId() const {
  return instanceId_;
}

void RunCommandRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

std::string RunCommandRequest::getName() const {
  return name_;
}

void RunCommandRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::map<std::string, std::string> RunCommandRequest::getParameters() const {
  return parameters_;
}

void RunCommandRequest::setParameters(std::map<std::string, std::string> parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

bool RunCommandRequest::getEnableParameter() const {
  return enableParameter_;
}

void RunCommandRequest::setEnableParameter(bool enableParameter) {
  enableParameter_ = enableParameter;
  setParameter(std::string("EnableParameter"), enableParameter ? "true" : "false");
}

std::string RunCommandRequest::getUsername() const {
  return username_;
}

void RunCommandRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

