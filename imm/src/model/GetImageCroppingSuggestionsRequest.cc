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

#include <alibabacloud/imm/model/GetImageCroppingSuggestionsRequest.h>

using AlibabaCloud::Imm::Model::GetImageCroppingSuggestionsRequest;

GetImageCroppingSuggestionsRequest::GetImageCroppingSuggestionsRequest()
    : RpcServiceRequest("imm", "2017-09-06", "GetImageCroppingSuggestions") {
  setMethod(HttpRequest::Method::Post);
}

GetImageCroppingSuggestionsRequest::~GetImageCroppingSuggestionsRequest() {}

std::string GetImageCroppingSuggestionsRequest::getProject() const {
  return project_;
}

void GetImageCroppingSuggestionsRequest::setProject(const std::string &project) {
  project_ = project;
  setParameter(std::string("Project"), project);
}

std::string GetImageCroppingSuggestionsRequest::getAspectRatios() const {
  return aspectRatios_;
}

void GetImageCroppingSuggestionsRequest::setAspectRatios(const std::string &aspectRatios) {
  aspectRatios_ = aspectRatios;
  setParameter(std::string("AspectRatios"), aspectRatios);
}

std::string GetImageCroppingSuggestionsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetImageCroppingSuggestionsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetImageCroppingSuggestionsRequest::getImageUri() const {
  return imageUri_;
}

void GetImageCroppingSuggestionsRequest::setImageUri(const std::string &imageUri) {
  imageUri_ = imageUri;
  setParameter(std::string("ImageUri"), imageUri);
}

