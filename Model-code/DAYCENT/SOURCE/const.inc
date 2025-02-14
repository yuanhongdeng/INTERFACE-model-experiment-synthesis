
c               Copyright 1993 Colorado State University
c                       All Rights Reserved


      integer CRPSYS, FORSYS, SAVSYS,
     &        MAXIEL, N, P, S,
     &        MAXLYR, MONTHS, SRFC, SOIL, SWMAXLYR,
     &        CPARTS, ABOVE, BELOW, BELOWJ, BELOWM,
     &        FPARTS, LEAF, FROOT, FROOTJ, FROOTM, FBRCH, LWOOD, CROOT,
     &        NEWFOR, OLDFOR,
     &        IMIN, IMAX, IVAL,
     &        INTCPT, SLOPE,
     &        UNLABL, LABELD, ISOS,
     &        ESTOR, ESOIL, ENFIX, EFERT
      double precision    PEEDEE, FRAC_C14, W2KJ

c ... CRPSYS, FORSYS, SAVSYS is an enumeration for the system
      parameter (CRPSYS = 1)
      parameter (FORSYS = 2)
      parameter (SAVSYS = 3)

c ... MAXIEL is the total # of elements available
c ...   N = Nitrogen, P = Phosphorus, S = Sulphur
      parameter (MAXIEL = 3)
      parameter (N = 1)
      parameter (P = 2)
      parameter (S = 3)

c ... MAXLYR is the maximum number of layers
      parameter (MAXLYR = 10)

c ... SWMAXLYR is the maximum number of layers in the soil water model
      parameter (SWMAXLYR = 21)

c ... MONTHS is the number of months
      parameter (MONTHS = 12)

c ... SRFC, SOIL are enumerations for surface, soil
      parameter (SRFC = 1)
      parameter (SOIL = 2)

c ... CPARTS is the number of parts in the grassland/crop system:
c ...   ABOVE is an enumeration for aboveground
c ...   BELOW is an enumeration for belowground
c ...   BELOWJ is an enumeration for juvenile belowground
c ...   BELOWM is an enumeration for mature belowground
      parameter (CPARTS = 3)
      parameter (ABOVE = 1)
      parameter (BELOW = 2)
      parameter (BELOWJ = 2)
      parameter (BELOWM = 3)

c ... FPARTS is the number of parts in the forest system:
c ...   LEAF   =  leaf forest part
c ...   FROOT =  fine root forest part
c ...   FROOTJ =  juvenile fine root forest part
c ...   FROOTM =  mature fine root forest part
c ...   FBRCH  =  fine branch forest part
c ...   LWOOD  =  large wood forest part
c ...   CROOT  =  coarse root forest part
      parameter (FPARTS = 6)
      parameter (LEAF = 1)
      parameter (FROOT = 2)
      parameter (FROOTJ = 2)
      parameter (FBRCH = 3)
      parameter (LWOOD = 4)
      parameter (CROOT = 5)
      parameter (FROOTM = 6)

c ... NEWFOR, OLDFOR are the new and old forests array pointers
      parameter (NEWFOR = 1)
      parameter (OLDFOR = 2)

c ... IMIN, IMAX, IVAL are enumerations for indexing arrays
      parameter (IMIN = 1)
      parameter (IMAX = 2)
      parameter (IVAL = 3)

c ... INTCPT, SLOPE are the intercept and slope array pointers
      parameter (INTCPT = 1)
      parameter (SLOPE = 2)

c ... UNLABL, LABELD are the unlabeled, labeled array pointers
      parameter (UNLABL = 1)
      parameter (LABELD = 2)

c ... ISOS is the total number of isotopes (unlabeld, labeled)
      parameter (ISOS = 2)

c ... ESTOR, ESOIL, ENFIX, EFERT are enumerations used only in
c ... restrp.f, growth.f, trees.f
      parameter (ESTOR = 1)
      parameter (ESOIL = 2)
      parameter (ENFIX = 3)
      parameter (EFERT = 4)

c ... Constant values
c ... Change value of PEEDEE constant used in del13c computations,
c ... cak - 12/19/01
c      parameter (PEEDEE=0.0112372)
      parameter (PEEDEE=0.01119490)

c ... Fraction of the total carbon that is C14 carbon
c      parameter (FRAC_C14=0.00103)
      parameter (FRAC_C14=0.00000103)

c ... W/m^2/day to KJ conversion factor for solar radiation
      parameter (W2KJ = 86.4)