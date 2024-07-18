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

#include <alibabacloud/aicontent/model/Personalizedtxt2imgAddInferenceJobRequest.h>

using AlibabaCloud::AiContent::Model::Personalizedtxt2imgAddInferenceJobRequest;

Personalizedtxt2imgAddInferenceJobRequest::Personalizedtxt2imgAddInferenceJobRequest()
    : RoaServiceRequest("aicontent", "20240611") {
  setResourcePath("/api/v1/personalizedtxt2img/addInferenceJob"};
  setMethod(HttpRequest::Method::Post);
}

Personalizedtxt2imgAddInferenceJobRequest::~Personalizedtxt2imgAddInferenceJobRequest() {}

std::string Personalizedtxt2imgAddInferenceJobRequest::getBody() const {
  return body_;
}

void Personalizedtxt2imgAddInferenceJobRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

