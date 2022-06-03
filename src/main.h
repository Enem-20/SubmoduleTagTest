#pragma once

class main {
	void virtual printWorks() const;
};

class SubMain : main{
	void printWorks() const override;
};