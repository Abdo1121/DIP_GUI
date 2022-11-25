#pragma once
#include<opencv2/opencv.hpp>
#include"iostream"

namespace DIPGui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace cv;
	/* src image */
	Mat src = imread("cvbcvgh.jpeg", 0);


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ShowButton;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ShowButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ShowButton
			// 
			this->ShowButton->Location = System::Drawing::Point(28, 23);
			this->ShowButton->Name = L"ShowButton";
			this->ShowButton->Size = System::Drawing::Size(75, 23);
			this->ShowButton->TabIndex = 0;
			this->ShowButton->Text = L"ShowSrc";
			this->ShowButton->UseVisualStyleBackColor = true;
			this->ShowButton->Click += gcnew System::EventHandler(this, &MyForm::ShowButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1447, 673);
			this->Controls->Add(this->ShowButton);
			this->Name = L"MyForm";
			this->Text = L"MyGui_DIP";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ShowButton_Click(System::Object^ sender, System::EventArgs^ e) {

		namedWindow("The_Src", 0);
		imshow("The_Src", src);
	}
	};
}
