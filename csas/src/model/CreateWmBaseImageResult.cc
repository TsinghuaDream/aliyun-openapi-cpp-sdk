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

#include <alibabacloud/csas/model/CreateWmBaseImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

CreateWmBaseImageResult::CreateWmBaseImageResult() :
	ServiceResult()
{}

CreateWmBaseImageResult::CreateWmBaseImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateWmBaseImageResult::~CreateWmBaseImageResult()
{}

void CreateWmBaseImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ImageId"].isNull())
		data_.imageId = dataNode["ImageId"].asString();
	if(!dataNode["ImageUrl"].isNull())
		data_.imageUrl = dataNode["ImageUrl"].asString();
	if(!dataNode["ImageUrlExp"].isNull())
		data_.imageUrlExp = std::stol(dataNode["ImageUrlExp"].asString());

}

CreateWmBaseImageResult::Data CreateWmBaseImageResult::getData()const
{
	return data_;
}

