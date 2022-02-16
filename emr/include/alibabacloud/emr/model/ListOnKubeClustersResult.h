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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTONKUBECLUSTERSRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTONKUBECLUSTERSRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListOnKubeClustersResult : public ServiceResult
			{
			public:
				struct Cluster
				{
					std::string kubeNamespace;
					std::string kubeClusterId;
					std::string vpcId;
					std::string clusterId;
					long createTime;
					std::string clusterName;
					std::string clusterType;
					std::string failReason;
					std::string clusterStatus;
				};


				ListOnKubeClustersResult();
				explicit ListOnKubeClustersResult(const std::string &payload);
				~ListOnKubeClustersResult();
				std::vector<Cluster> getOnKubeClusterSummary()const;
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Cluster> onKubeClusterSummary_;
				int totalCount_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTONKUBECLUSTERSRESULT_H_