#include<rvmreader.h>

class rvmreaderlib : public RVMReader{
public:
  rvmreaderlib();
  virtual ~rvmreaderlib();
  virtual void startDocument();
  virtual void endDocument();

  virtual void startHeader(const std::string& banner, const std::string& fileNote, const std::string& date, const std::string& user, const 
std::string& encoding);
        virtual void endHeader();

        virtual void startModel(const std::string& projectName, const std::string& name);
        virtual void endModel();

        virtual void startGroup(const std::string& name, const Vector3F& translation, const int& materialId);
        virtual void endGroup();

        virtual void startMetaData();
        virtual void endMetaData();

        virtual void startMetaDataPair(const std::string& name, const std::string& value);
        virtual void endMetaDataPair();

        virtual void createPyramid(const std::array<float, 12>& matrix, const Primitives::Pyramid& params);

        virtual void createBox(const std::array<float, 12>& matrix, const Primitives::Box& params);

        virtual void createRectangularTorus(const std::array<float, 12>& matrix, const Primitives::RectangularTorus& params);

        virtual void createCircularTorus(const std::array<float, 12>& matrix, const Primitives::CircularTorus& params);

        virtual void createEllipticalDish(const std::array<float, 12>& matrix, const Primitives::EllipticalDish& params);

        virtual void createSphericalDish(const std::array<float, 12>& matrix, const Primitives::SphericalDish& params);

        virtual void createSnout(const std::array<float, 12>& matrix, const Primitives::Snout& params);

        virtual void createCylinder(const std::array<float, 12>& matrix, const Primitives::Cylinder& params);

        virtual void createSphere(const std::array<float, 12>& matrix, const Primitives::Sphere& params);

        virtual void createLine(const std::array<float, 12>& matrix, const float& startx, const float& endx);

        virtual void createFacetGroup(const std::array<float, 12>& matrix, const std::vector<std::vector<std::vector<std::pair<Vector3F, Vector3F> > 
> >& vertexes);
};
}
