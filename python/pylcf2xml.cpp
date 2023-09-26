#include "pylcf2xml.h"
#include <pybind11/pybind11.h>

lcf::EngineVersion GetEngineVersion(std::string engine) {
    if (engine == "2k3") {
        return lcf::EngineVersion::e2k3;
    }
    return lcf::EngineVersion::e2k;
}

std::string lmu2xml(const std::string& in, std::string engine, std::string encoding) {
    std::istringstream istream(in, std::ios::binary);
    auto file = lcf::LMU_Reader::Load(istream, encoding);
    std::ostringstream ostream(std::ios::binary);
    lcf::LMU_Reader::SaveXml(ostream, *file, GetEngineVersion(engine));
    return ostream.str();
}

std::string lsd2xml(const std::string& in, std::string engine, std::string encoding) {
    std::istringstream istream(in, std::ios::binary);
    auto file = lcf::LSD_Reader::Load(istream, encoding);
    std::ostringstream ostream(std::ios::binary);
    lcf::LSD_Reader::SaveXml(ostream, *file, GetEngineVersion(engine));
    return ostream.str();
}

std::string ldb2xml(const std::string& in, std::string encoding) {
    std::istringstream istream(in, std::ios::binary);
    auto file = lcf::LDB_Reader::Load(istream, encoding);
    std::ostringstream ostream(std::ios::binary);
    lcf::LDB_Reader::SaveXml(ostream, *file);
    return ostream.str();
}

std::string lmt2xml(const std::string& in, std::string engine, std::string encoding) {
    std::istringstream istream(in, std::ios::binary);
    auto file = lcf::LMT_Reader::Load(istream, encoding);
    std::ostringstream ostream(std::ios::binary);
    lcf::LMT_Reader::SaveXml(ostream, *file, GetEngineVersion(engine));
    return ostream.str();
}

std::string xml2lmu(const std::string& in, std::string engine, std::string encoding) {
    std::istringstream istream(in, std::ios::binary);
    auto file = lcf::LMU_Reader::LoadXml(istream);
    std::ostringstream ostream(std::ios::binary);
    lcf::LMU_Reader::Save(ostream, *file, GetEngineVersion(engine), encoding);
    return ostream.str();
}

std::string xml2lsd(const std::string& in, std::string engine, std::string encoding) {
    std::istringstream istream(in, std::ios::binary);
    auto file = lcf::LSD_Reader::LoadXml(istream);
    std::ostringstream ostream(std::ios::binary);
    lcf::LSD_Reader::Save(ostream, *file, GetEngineVersion(engine), encoding);
    return ostream.str();
}

std::string xml2ldb(const std::string& in, std::string encoding) {
    std::istringstream istream(in, std::ios::binary);
    auto file = lcf::LDB_Reader::LoadXml(istream);
    std::ostringstream ostream(std::ios::binary);
    lcf::LDB_Reader::Save(ostream, *file, encoding);
    return ostream.str();
}

std::string xml2lmt(const std::string& in, std::string engine, std::string encoding) {
    std::istringstream istream(in, std::ios::binary);
    auto file = lcf::LMT_Reader::LoadXml(istream);
    std::ostringstream ostream(std::ios::binary);
    lcf::LMT_Reader::Save(ostream, *file, GetEngineVersion(engine), encoding);
    return ostream.str();
}

PYBIND11_MODULE(pylcf2xml, m) {
    m.doc() =
        "LCF2XML is a small tool to convert RPG Maker 2000 and 2003 data format (LMU, LMT, LDB, LSD, ...) to XML and "
        "vice versa.";
    m.def("lmu2xml", &lmu2xml, "Convert .lmu file into xml", pybind11::arg("in"), pybind11::kw_only(),
          pybind11::arg("engine") = "2k3", pybind11::arg("encoding"));
    m.def("lsd2xml", &lsd2xml, "Convert .lsd file into xml", pybind11::arg("in"), pybind11::kw_only(),
          pybind11::arg("engine") = "2k3", pybind11::arg("encoding"));
    m.def("ldb2xml", &ldb2xml, "Convert .ldb file into xml", pybind11::arg("in"), pybind11::kw_only(),
          pybind11::arg("encoding"));
    m.def("lmt2xml", &lmt2xml, "Convert .lmt file into xml", pybind11::arg("in"), pybind11::kw_only(),
          pybind11::arg("engine") = "2k3", pybind11::arg("encoding"));
    m.def("xml2lmu", &xml2lmu, "Convert xml file into .lmu", pybind11::arg("in"), pybind11::kw_only(),
          pybind11::arg("engine") = "2k3", pybind11::arg("encoding"));
    m.def("xml2lsd", &xml2lsd, "Convert xml file into .lsd", pybind11::arg("in"), pybind11::kw_only(),
          pybind11::arg("engine") = "2k3", pybind11::arg("encoding"));
    m.def("xml2ldb", &xml2ldb, "Convert xml file into .ldb", pybind11::arg("in"), pybind11::kw_only(),
          pybind11::arg("encoding"));
    m.def("xml2lmt", &xml2lmt, "Convert xml file into .lmt", pybind11::arg("in"), pybind11::kw_only(),
          pybind11::arg("engine") = "2k3", pybind11::arg("encoding"));
}