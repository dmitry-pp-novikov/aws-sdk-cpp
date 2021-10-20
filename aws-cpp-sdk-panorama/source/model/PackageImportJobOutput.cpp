﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/PackageImportJobOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

PackageImportJobOutput::PackageImportJobOutput() : 
    m_packageIdHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_patchVersionHasBeenSet(false),
    m_outputS3LocationHasBeenSet(false)
{
}

PackageImportJobOutput::PackageImportJobOutput(JsonView jsonValue) : 
    m_packageIdHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_patchVersionHasBeenSet(false),
    m_outputS3LocationHasBeenSet(false)
{
  *this = jsonValue;
}

PackageImportJobOutput& PackageImportJobOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PackageId"))
  {
    m_packageId = jsonValue.GetString("PackageId");

    m_packageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageVersion"))
  {
    m_packageVersion = jsonValue.GetString("PackageVersion");

    m_packageVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PatchVersion"))
  {
    m_patchVersion = jsonValue.GetString("PatchVersion");

    m_patchVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputS3Location"))
  {
    m_outputS3Location = jsonValue.GetObject("OutputS3Location");

    m_outputS3LocationHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageImportJobOutput::Jsonize() const
{
  JsonValue payload;

  if(m_packageIdHasBeenSet)
  {
   payload.WithString("PackageId", m_packageId);

  }

  if(m_packageVersionHasBeenSet)
  {
   payload.WithString("PackageVersion", m_packageVersion);

  }

  if(m_patchVersionHasBeenSet)
  {
   payload.WithString("PatchVersion", m_patchVersion);

  }

  if(m_outputS3LocationHasBeenSet)
  {
   payload.WithObject("OutputS3Location", m_outputS3Location.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
