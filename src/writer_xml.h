/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_WRITER_XML_H
#define LCF_WRITER_XML_H

#include <string>
#include <vector>
#include <cstdio>
#include "reader_types.h"

/**
 * XmlWriter class.
 */
class XmlWriter {

public:
	/**
	 * Constructs a new XML File Writer.
	 *
	 * @param filename file to open.
	 */
	XmlWriter(const char* filename);

	/**
	 * Constructs a new XML File Writer.
	 *
	 * @param filename file to open.
	 */
	XmlWriter(const std::string& filename);

	/**
	 * Destructor. Closes the opened file.
	 */
	~XmlWriter();

	/**
	 * Opens the file.
	 */
	void Open();

	/**
	 * Closes the opened file.
	 */
	void Close();

	/**
	 * Writes an integer to the stream.
	 *
	 * @param val the integer.
	 */
	void WriteInt(int val);

	/**
	 * Writes a primitive value to the stream.
	 *
	 * @param val the value.
	 */
	template <class T>
	void Write(const T& val);

	/**
	 * Writes a primitive value in a node to the stream.
	 * Calls BeginElement, Write and EndElement.
	 *
	 * @param name the node name string.
	 * @param val the value.
	 */
	template <class T>
	void WriteNode(const std::string& name, const T& val);

	/**
	 * Writes element starting tag to the stream.
	 *
	 * @param name the element name string.
	 */
	void BeginElement(const std::string& name);

	/**
	 * Writes element starting tag and attribute id to the stream.
	 *
	 * @param name the element name string.
	 * @param ID the attribute ID integer.
	 */
	void BeginElement(const std::string& name, int ID);

	/**
	 * Writes element ending tag to the stream.
	 *
	 * @param name the element name string.
	 */
	void EndElement(const std::string& name);

	/**
	 * Writes a line break to the stream.
	 */
	void NewLine();

	/**
	 * Checks if the file is writable and if no error
	 * occured.
	 *
	 * @return true if the stream is okay.
	 */
	bool IsOk() const;

protected:
	/** Name of the file that is associated with the stream. */
	std::string filename;
	/** File-stream managed by this Writer. */
	FILE *stream;
	/** Stores indentation level. */
	int indent;
	/** Indicates if writer cursor is at the beginning of the line. */
	bool at_bol;

	/**
	 * Writes an indentation to the stream.
	 */
	void Indent();

	/**
	 * Writes a vector of primitive values to the stream.
	 *
	 * @param val vector to write.
	 */
	template <class T>
	void WriteVector(const std::vector<T>& val);

};

#endif
