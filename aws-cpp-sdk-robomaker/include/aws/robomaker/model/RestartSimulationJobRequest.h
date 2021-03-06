﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class AWS_ROBOMAKER_API RestartSimulationJobRequest : public RoboMakerRequest
  {
  public:
    RestartSimulationJobRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestartSimulationJob"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline const Aws::String& GetJob() const{ return m_job; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline bool JobHasBeenSet() const { return m_jobHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline void SetJob(const Aws::String& value) { m_jobHasBeenSet = true; m_job = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline void SetJob(Aws::String&& value) { m_jobHasBeenSet = true; m_job = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline void SetJob(const char* value) { m_jobHasBeenSet = true; m_job.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline RestartSimulationJobRequest& WithJob(const Aws::String& value) { SetJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline RestartSimulationJobRequest& WithJob(Aws::String&& value) { SetJob(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline RestartSimulationJobRequest& WithJob(const char* value) { SetJob(value); return *this;}

  private:

    Aws::String m_job;
    bool m_jobHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
