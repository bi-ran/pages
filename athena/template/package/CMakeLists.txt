# The name of the package:
atlas_subdir (ALE_PACKAGE)

# Add the shared library:
atlas_add_library (ALE_PACKAGELib
  ALE_PACKAGE/*.h Root/*.cxx
  PUBLIC_HEADERS ALE_PACKAGE
  LINK_LIBRARIES AnaAlgorithmLib)

if (XAOD_STANDALONE)
  # Add the dictionary (for AnalysisBase only):
  atlas_add_dictionary (ALE_PACKAGEDict
    ALE_PACKAGE/ALE_PACKAGEDict.h
    ALE_PACKAGE/selection.xml
    LINK_LIBRARIES ALE_PACKAGELib)
endif ()

if (NOT XAOD_STANDALONE)
  # Add a component library for AthAnalysis only:
  atlas_add_component (ALE_PACKAGE
    src/components/*.cxx
    LINK_LIBRARIES ALE_PACKAGELib)
endif ()

# Install files from the package:
atlas_install_joboptions( share/*_jobOptions.py )
atlas_install_scripts( share/*_eljob.py )
