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

#include <alibabacloud/ocr/model/RecognizeVideoCharacterRequest.h>

using AlibabaCloud::Ocr::Model::RecognizeVideoCharacterRequest;

RecognizeVideoCharacterRequest::RecognizeVideoCharacterRequest() :
	RpcServiceRequest("ocr", "2019-12-30", "RecognizeVideoCharacter")
{
	setMethod(HttpRequest::Method::Post);
}

RecognizeVideoCharacterRequest::~RecognizeVideoCharacterRequest()
{}

bool RecognizeVideoCharacterRequest::getAsync()const
{
	return async_;
}

void RecognizeVideoCharacterRequest::setAsync(bool async)
{
	async_ = async;
	setBodyParameter("Async", async ? "true" : "false");
}

std::string RecognizeVideoCharacterRequest::getVideoURL()const
{
	return videoURL_;
}

void RecognizeVideoCharacterRequest::setVideoURL(const std::string& videoURL)
{
	videoURL_ = videoURL;
	setBodyParameter("VideoURL", videoURL);
}

