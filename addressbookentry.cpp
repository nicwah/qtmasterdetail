#include "addressbookentry.h"

AddressBookEntry::AddressBookEntry(QObject *parent) : QObject(parent)
{

}

QString AddressBookEntry::name() const
{
    return m_name;
}

void AddressBookEntry::setName(const QString &name)
{
    if (m_name != name) {
        m_name = name;
        emit nameChanged();
    }
}

QString AddressBookEntry::address() const
{
    return m_address;
}

void AddressBookEntry::setAddress(const QString &address)
{
    if (m_address != address) {
        m_address = address;
        emit addressChanged();
    }
}

QDate AddressBookEntry::birthdate() const
{
    return m_birthdate;
}

void AddressBookEntry::setBirthdate(const QDate &birthdate)
{
    if (m_birthdate != birthdate) {
        m_birthdate = birthdate;
        emit birthdateChanged();
    }
}

QStringList AddressBookEntry::phoneNumbers() const
{
    return m_phoneNumbers;
}

void AddressBookEntry::setPhoneNumbers(const QStringList &phoneNumbers)
{
    if (m_phoneNumbers != phoneNumbers) {
        m_phoneNumbers = phoneNumbers;
        emit phoneNumbersChanged();
    }
}
