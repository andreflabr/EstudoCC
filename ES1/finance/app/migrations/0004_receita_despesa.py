# Generated by Django 4.2.6 on 2023-11-06 23:50

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('app', '0003_dica_tipometa_meta'),
    ]

    operations = [
        migrations.CreateModel(
            name='Receita',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('tipo_saldo', models.ManyToManyField(to='app.tiposaldo')),
            ],
        ),
        migrations.CreateModel(
            name='Despesa',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('tipo_saldo', models.ManyToManyField(to='app.tiposaldo')),
            ],
        ),
    ]
