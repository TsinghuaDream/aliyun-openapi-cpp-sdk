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

#include <alibabacloud/ecd/model/CopyCdsFileRequest.h>

using AlibabaCloud::Ecd::Model::CopyCdsFileRequest;

CopyCdsFileRequest::CopyCdsFileRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CopyCdsFile") {
  setMethod(HttpRequest::Method::Post);
}

CopyCdsFileRequest::~CopyCdsFileRequest() {}

bool CopyCdsFileRequest::getAutoRename() const {
  return autoRename_;
}

void CopyCdsFileRequest::setAutoRename(bool autoRename) {
  autoRename_ = autoRename;
  setParameter(std::string("AutoRename"), autoRename ? "true" : "false");
}

std::string CopyCdsFileRequest::getCdsId() const {
  return cdsId_;
}

void CopyCdsFileRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

std::string CopyCdsFileRequest::getParentFolderId() const {
  return parentFolderId_;
}

void CopyCdsFileRequest::setParentFolderId(const std::string &parentFolderId) {
  parentFolderId_ = parentFolderId;
  setParameter(std::string("ParentFolderId"), parentFolderId);
}

std::string CopyCdsFileRequest::getRegionId() const {
  return regionId_;
}

void CopyCdsFileRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CopyCdsFileRequest::getEndUserId() const {
  return endUserId_;
}

void CopyCdsFileRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string CopyCdsFileRequest::getFileId() const {
  return fileId_;
}

void CopyCdsFileRequest::setFileId(const std::string &fileId) {
  fileId_ = fileId;
  setParameter(std::string("FileId"), fileId);
}

