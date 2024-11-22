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

#ifndef ALIBABACLOUD_QIANZHOU_MODEL_QUERYNODEINFORESULT_H_
#define ALIBABACLOUD_QIANZHOU_MODEL_QUERYNODEINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/qianzhou/QianzhouExport.h>

namespace AlibabaCloud
{
	namespace Qianzhou
	{
		namespace Model
		{
			class ALIBABACLOUD_QIANZHOU_EXPORT QueryNodeInfoResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string uid;
					std::string clusterId;
					std::string instanceId;
					std::string region;
					std::string cluserName;
				};


				QueryNodeInfoResult();
				explicit QueryNodeInfoResult(const std::string &payload);
				~QueryNodeInfoResult();
				std::string getMsg()const;
				std::vector<DataItem> getdata()const;
				std::string getRequestId()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				std::vector<DataItem> data_;
				std::string requestId_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QIANZHOU_MODEL_QUERYNODEINFORESULT_H_