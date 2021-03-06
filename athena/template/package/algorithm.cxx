#include <AsgTools/MessageCheck.h>
#include <ALE_PACKAGE/ALE_ALGORITHM.h>

ALE_ALGORITHM::ALE_ALGORITHM(const std::string& name, ISvcLocator *pSvcLocator)
  : EL::AnaAlgorithm(name, pSvcLocator) {
  // Here you put any code for the base initialization of variables,
  // e.g. initialize all pointers to 0.  This is also where you
  // declare all properties for your algorithm.  Note that things like
  // resetting statistics variables or booking histograms should
  // rather go into the initialize() function.
}

StatusCode ALE_ALGORITHM::initialize() {
  // Here you do everything that needs to be done at the very
  // beginning on each worker node, e.g. create histograms and output
  // trees.  This method gets called before any input files are
  // connected.

  return StatusCode::SUCCESS;
}

StatusCode ALE_ALGORITHM::execute() {
  // Here you do everything that needs to be done on every single
  // events, e.g. read input variables, apply cuts, and fill
  // histograms and trees.  This is where most of your actual analysis
  // code will go.

  return StatusCode::SUCCESS;
}

StatusCode ALE_ALGORITHM::finalize() {
  // This method is the mirror image of initialize(), meaning it gets
  // called after the last event has been processed on the worker node
  // and allows you to finish up any objects you created in
  // initialize() before they are written to disk.  This is actually
  // fairly rare, since this happens separately for each worker node.
  // Most of the time you want to do your post-processing on the
  // submission node after all your histogram outputs have been
  // merged.

  return StatusCode::SUCCESS;
}
