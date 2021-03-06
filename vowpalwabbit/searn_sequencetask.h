/*
Copyright (c) by respective owners including Yahoo!, Microsoft, and
individual contributors. All rights reserved.  Released under a BSD
license as described in the file LICENSE.
 */
#ifndef SEARN_SEQUENCETASK_H
#define SEARN_SEQUENCETASK_H

#include "searn.h"

namespace SequenceTask {
  void initialize(Searn::searn&, size_t&, po::variables_map&);
  void finish(Searn::searn&);
  void structured_predict(Searn::searn&, vector<example*>);
  extern Searn::searn_task task;
}

namespace ArgmaxTask {
  void initialize(Searn::searn&, size_t&, po::variables_map&);
  void finish(Searn::searn&);
  void structured_predict(Searn::searn&, vector<example*>);
  extern Searn::searn_task task;
}

namespace SequenceSpanTask {
  void initialize(Searn::searn&, size_t&, po::variables_map&);
  void finish(Searn::searn&);
  void structured_predict(Searn::searn&, vector<example*>);
  extern Searn::searn_task task;
}

namespace SequenceTask_DemoLDF {
  void initialize(Searn::searn&, size_t&, po::variables_map&);
  void finish(Searn::searn&);
  void structured_predict(Searn::searn&, vector<example*>);
  void update_example_indicies(bool audit, example* ec, uint32_t mult_amount, uint32_t plus_amount);
  extern Searn::searn_task task;
}


#endif
