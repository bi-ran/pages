#ifndef ALE_PACKAGE_ALE_ALGORITHM_H
#define ALE_PACKAGE_ALE_ALGORITHM_H

#include <AnaAlgorithm/AnaAlgorithm.h>

class ALE_ALGORITHM : public EL::AnaAlgorithm {
  public:
    ALE_ALGORITHM(const std::string& name, ISvcLocator* pSvcLocator);

    virtual StatusCode initialize() override;
    virtual StatusCode execute() override;
    virtual StatusCode finalize() override;

  private:
};

#endif /* ALE_PACKAGE_ALE_ALGORITHM_H */
