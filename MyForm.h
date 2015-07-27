#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int adultNum = 0;
	int childrenNum = 0;
	int insertedBills = 0;
	int totatTicketPrice = 0;
	int change = 0;

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"How Many Adults\? ($5 Each)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"How Many Children\? ($2 Each)";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 121);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Total Ticket Price ($)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 225);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Change ($)";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(172, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(172, 70);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(172, 123);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(172, 176);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 11;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(172, 229);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Please Insert Bills ($)";
			
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			//this->Text = L"MyForm";
			this->Text = L"Welcome You!";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (!int::TryParse(textBox1->Text, adultNum)) {
		MessageBox::Show("Please enter a non-negative integer");
		textBox1->Text = "0";
	}
	
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (!int::TryParse(textBox2->Text,  childrenNum)) {
		MessageBox::Show("Please enter a non-negative integer");
		textBox2->Text = "0";
	}

}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	totatTicketPrice = 5 * adultNum + 2 * childrenNum;
	textBox3->Text = System::Convert::ToString(totatTicketPrice);
}

private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	insertedBills = System::Convert::ToInt64(textBox4->Text);
	if (insertedBills < totatTicketPrice)
	{
		MessageBox::Show("Please Insert More Bills");
	}
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	change = insertedBills - totatTicketPrice;
	textBox5->Text = System::Convert::ToString(change);
}

};
}
