
c               Copyright 1993 Colorado State University
c                       All Rights Reserved


c ... time is in a separate common block for compatability with TIME0

      common /zztim/ time, time2
      double precision time, time2

      save /zztim/
