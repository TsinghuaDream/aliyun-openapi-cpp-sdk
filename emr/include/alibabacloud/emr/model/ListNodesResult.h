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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTNODESRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTNODESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListNodesResult : public ServiceResult
			{
			public:
				struct Node
				{
					std::string nodeState;
					bool ecsAutoRenew;
					std::string nodeGroupName;
					std::string zoneId;
					std::string nodeName;
					std::string publicIp;
					long emrExpireTime;
					long ecsExpireTime;
					std::string privateIp;
					std::string nodeGroupId;
					std::string nodeId;
					std::string nodeGroupType;
					bool emrAutoRenew;
					std::string instanceType;
				};


				ListNodesResult();
				explicit ListNodesResult(const std::string &payload);
				~ListNodesResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<Node> getNodes()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				int maxResults_;
				std::vector<Node> nodes_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTNODESRESULT_H_