//
//  SerializeSourcemap.h
//  drafter
//
//  Created by Pavan Kumar Sunkara on 18/01/15.
//  Copyright (c) 2015 Apiary Inc. All rights reserved.
//

#ifndef DRAFTER_SERIALIZE_SOURCEMAP_H
#define DRAFTER_SERIALIZE_SOURCEMAP_H

#include "Serialize.h"

namespace drafter {

    sos::Object WrapBlueprintSourcemap(const snowcrash::SourceMap<snowcrash::Blueprint>& blueprint);
}

#endif
