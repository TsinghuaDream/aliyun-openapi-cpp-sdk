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

#include <alibabacloud/imm/model/CreateVideoCompressTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateVideoCompressTaskRequest;

CreateVideoCompressTaskRequest::CreateVideoCompressTaskRequest()
    : RpcServiceRequest("imm", "2017-09-06", "CreateVideoCompressTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateVideoCompressTaskRequest::~CreateVideoCompressTaskRequest() {}

std::string CreateVideoCompressTaskRequest::getTargetSubtitle() const {
  return targetSubtitle_;
}

void CreateVideoCompressTaskRequest::setTargetSubtitle(const std::string &targetSubtitle) {
  targetSubtitle_ = targetSubtitle;
  setParameter(std::string("TargetSubtitle"), targetSubtitle);
}

std::string CreateVideoCompressTaskRequest::getProject() const {
  return project_;
}

void CreateVideoCompressTaskRequest::setProject(const std::string &project) {
  project_ = project;
  setParameter(std::string("Project"), project);
}

std::string CreateVideoCompressTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateVideoCompressTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateVideoCompressTaskRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void CreateVideoCompressTaskRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string CreateVideoCompressTaskRequest::getTargetContainer() const {
  return targetContainer_;
}

void CreateVideoCompressTaskRequest::setTargetContainer(const std::string &targetContainer) {
  targetContainer_ = targetContainer;
  setParameter(std::string("TargetContainer"), targetContainer);
}

std::string CreateVideoCompressTaskRequest::getCustomMessage() const {
  return customMessage_;
}

void CreateVideoCompressTaskRequest::setCustomMessage(const std::string &customMessage) {
  customMessage_ = customMessage;
  setParameter(std::string("CustomMessage"), customMessage);
}

std::string CreateVideoCompressTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateVideoCompressTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

std::string CreateVideoCompressTaskRequest::getTargetList() const {
  return targetList_;
}

void CreateVideoCompressTaskRequest::setTargetList(const std::string &targetList) {
  targetList_ = targetList;
  setParameter(std::string("TargetList"), targetList);
}

std::string CreateVideoCompressTaskRequest::getVideoUri() const {
  return videoUri_;
}

void CreateVideoCompressTaskRequest::setVideoUri(const std::string &videoUri) {
  videoUri_ = videoUri;
  setParameter(std::string("VideoUri"), videoUri);
}

std::string CreateVideoCompressTaskRequest::getTargetSegment() const {
  return targetSegment_;
}

void CreateVideoCompressTaskRequest::setTargetSegment(const std::string &targetSegment) {
  targetSegment_ = targetSegment;
  setParameter(std::string("TargetSegment"), targetSegment);
}

