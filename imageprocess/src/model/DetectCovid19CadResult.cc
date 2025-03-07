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

#include <alibabacloud/imageprocess/model/DetectCovid19CadResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imageprocess;
using namespace AlibabaCloud::Imageprocess::Model;

DetectCovid19CadResult::DetectCovid19CadResult() :
	ServiceResult()
{}

DetectCovid19CadResult::DetectCovid19CadResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectCovid19CadResult::~DetectCovid19CadResult()
{}

void DetectCovid19CadResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NormalProbability"].isNull())
		data_.normalProbability = dataNode["NormalProbability"].asString();
	if(!dataNode["NewProbability"].isNull())
		data_.newProbability = dataNode["NewProbability"].asString();
	if(!dataNode["LesionRatio"].isNull())
		data_.lesionRatio = dataNode["LesionRatio"].asString();
	if(!dataNode["OtherProbability"].isNull())
		data_.otherProbability = dataNode["OtherProbability"].asString();
	if(!dataNode["Mask"].isNull())
		data_.mask = dataNode["Mask"].asString();

}

DetectCovid19CadResult::Data DetectCovid19CadResult::getData()const
{
	return data_;
}

