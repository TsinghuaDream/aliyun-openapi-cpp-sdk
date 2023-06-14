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

#ifndef ALIBABACLOUD_GA_MODEL_LISTENDPOINTGROUPSRESULT_H_
#define ALIBABACLOUD_GA_MODEL_LISTENDPOINTGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT ListEndpointGroupsResult : public ServiceResult
			{
			public:
				struct EndpointGroupsItem
				{
					struct EndpointConfigurationsItem
					{
						std::string probeProtocol;
						bool enableProxyProtocol;
						std::string type;
						bool enableClientIPPreservation;
						std::string endpoint;
						std::string endpointId;
						int probePort;
						int weight;
					};
					struct PortOverridesItem
					{
						int listenerPort;
						int endpointPort;
					};
					struct TagsItem
					{
						std::string value;
						std::string key;
					};
					int healthCheckIntervalSeconds;
					int trafficPercentage;
					std::vector<std::string> forwardingRuleIds;
					std::string endpointGroupId;
					std::string description;
					std::string healthCheckPath;
					int thresholdCount;
					bool healthCheckEnabled;
					std::string endpointRequestProtocol;
					std::string name;
					std::vector<EndpointGroupsItem::PortOverridesItem> portOverrides;
					std::vector<std::string> endpointGroupIpList;
					std::string endpointGroupRegion;
					std::vector<std::string> endpointGroupUnconfirmedIpList;
					std::string state;
					std::string healthCheckProtocol;
					int healthCheckPort;
					std::vector<EndpointGroupsItem::EndpointConfigurationsItem> endpointConfigurations;
					std::string acceleratorId;
					std::vector<EndpointGroupsItem::TagsItem> tags;
					std::string endpointGroupType;
					std::string listenerId;
				};


				ListEndpointGroupsResult();
				explicit ListEndpointGroupsResult(const std::string &payload);
				~ListEndpointGroupsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<EndpointGroupsItem> getEndpointGroups()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<EndpointGroupsItem> endpointGroups_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_LISTENDPOINTGROUPSRESULT_H_