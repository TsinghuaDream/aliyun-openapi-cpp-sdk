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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYCOPILOTEMBEDCONFIGRESULT_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYCOPILOTEMBEDCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>

namespace AlibabaCloud
{
	namespace Quickbi_public
	{
		namespace Model
		{
			class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT QueryCopilotEmbedConfigResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					struct DataRange
					{
						std::vector<std::string> llmCubes;
						bool allTheme;
						bool allCube;
						std::vector<std::string> themes;
					};
					std::string modifyUser;
					std::string moduleName;
					std::string createUser;
					DataRange dataRange;
					std::string agentName;
					std::string createUserName;
					std::string showName;
					std::string copilotId;
				};


				QueryCopilotEmbedConfigResult();
				explicit QueryCopilotEmbedConfigResult(const std::string &payload);
				~QueryCopilotEmbedConfigResult();
				bool getSuccess()const;
				std::vector<ResultItem> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool success_;
				std::vector<ResultItem> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYCOPILOTEMBEDCONFIGRESULT_H_