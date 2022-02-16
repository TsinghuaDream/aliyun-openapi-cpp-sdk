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

#ifndef ALIBABACLOUD_EMR_MODEL_GETAPPLICATIONRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_GETAPPLICATIONRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT GetApplicationResult : public ServiceResult
			{
			public:
				struct Application
				{
					struct Action
					{
						struct ActionParam
						{
							struct ValueAttribute
							{
								std::string description;
								std::string valueType;
								std::string valueIncrementStep;
								std::string valueMinimum;
								std::string valueUnit;
								std::string valueMaximum;
							};
							std::string description;
							ValueAttribute valueAttribute;
							std::string key;
						};
						std::string actionScope;
						std::string actionName;
						std::string runActionScope;
						std::string command;
						std::vector<Action::ActionParam> actionParams;
						std::vector<std::string> notSupportStates;
						std::string componentName;
					};
					std::string applicationName;
					std::string applicationVersion;
					std::vector<Action> actions;
					std::string applicationState;
				};


				GetApplicationResult();
				explicit GetApplicationResult(const std::string &payload);
				~GetApplicationResult();
				Application getApplication()const;

			protected:
				void parse(const std::string &payload);
			private:
				Application application_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_GETAPPLICATIONRESULT_H_