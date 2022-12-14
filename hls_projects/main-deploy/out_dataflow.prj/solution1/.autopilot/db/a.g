#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /work/shared/users/meng/sjz38/tmp/my_ultranet/hls_projects/main-deploy/out_dataflow.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
